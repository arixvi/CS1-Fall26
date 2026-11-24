/*
Program: A7 - Gradebook Using Structure and File IO
Programmer: Ari Murillo
Date: 11/24/2026
Class: CSCI 111 Foundations of Computer Science
Term: Fall 2026

Description: Reads student names and 4 test scores from a text file, finds each
student's average and letter grade, sorts students by average (highest first),
calculates class statistics, and writes a formatted grade report to a file.


Algorithm Steps:
1. Create a dynamic array to hold up to 50 student records
2. Show the menu and read the user's choice
3. Option 1: ask for the input file name, read all records, and
   find each student's average and letter grade
4. Option 2: sort the records in descending order by average
5. Option 3: print the report to the screen
6. Option 4: ask for the output file name and write the report to it
7. Option 5: quit
8. Repeat steps 2-7 until the user quits
9. Free the dynamic array
*/

#include <iostream>
#include <fstream>
#include <string>
#include "fileio.hpp"

using namespace std;

int main() {
    StudentGrade *students = new StudentGrade[MAX_STUDENTS];
    int count = 0;
    int option = 0;
    string fileName;

    do {
        cout << "\n===== Gradebook Menu =====\n"
             << "1. Read student data from file\n"
             << "2. Sort students by average (high to low)\n"
             << "3. Show report on screen\n"
             << "4. Write report to file\n"
             << "5. Quit\n"
             << "Enter option [1-5]: ";
        cin >> option;
        cin.ignore(1000, '\n');

        if (option == 1) {
            cout << "Enter input file name: ";
            getline(cin, fileName);
            count = readData(fileName, students);
            if (count == 0)
                cout << "No records read. Check the file name.\n";
            else
                cout << count << " student records read.\n";
        }
        else if (option == 2) {
            sortStudents(students, count);
            cout << "Students sorted by average.\n";
        }
        else if (option == 3) {
            writeReport(cout, students, count);
        }
        else if (option == 4) {
            cout << "Enter output file name: ";
            getline(cin, fileName);
            ofstream fout(fileName);
            writeReport(fout, students, count);
            fout.close();
            cout << "Report written to " << fileName << endl;
        }
        else if (option != 5) {
            cout << "Invalid option. Try again.\n";
        }
    } while (option != 5);

    cout << "Goodbye!\n";
    delete[] students;
    return 0;
}
