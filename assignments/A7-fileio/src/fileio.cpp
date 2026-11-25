#include <fstream>
#include <iomanip>
#include <algorithm>
#include "fileio.hpp"

// reads student records until end of file (max 50); returns how many were read
int readData(const string & fileName, StudentGrade students[]) {
    ifstream fin(fileName);
    if (!fin.is_open())
        return 0;
    int count = 0;
    while (count < MAX_STUDENTS && fin >> students[count].firstName >> students[count].lastName) {
        for (int t = 0; t < NUM_TESTS; t++)
            fin >> students[count].grades[t];
        students[count].average = findAverage(students[count]);
        students[count].letterGrade = findLetterGrade(students[count].average);
        count++;
    }
    fin.close();
    return count;
}

// average of one student's tests
float findAverage(const StudentGrade & s) {
    int sum = 0;
    for (int t = 0; t < NUM_TESTS; t++)
        sum += s.grades[t];
    return sum / float(NUM_TESTS);
}

// letter grade from an average
char findLetterGrade(float average) {
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}

// used by sort: higher average comes first
bool compareGreater(const StudentGrade & s1, const StudentGrade & s2) {
    return s1.average > s2.average;
}

// sorts students in descending order by average
void sortStudents(StudentGrade students[], int count) {
    sort(students, students + count, compareGreater);
}

// class average for one test column
float testAverage(const StudentGrade students[], int count, int test) {
    if (count == 0) return 0;
    int sum = 0;
    for (int i = 0; i < count; i++)
        sum += students[i].grades[test];
    return sum / float(count);
}

// highest score for one test column
int testMax(const StudentGrade students[], int count, int test) {
    if (count == 0) return 0;
    int max = students[0].grades[test];
    for (int i = 1; i < count; i++)
        if (students[i].grades[test] > max)
            max = students[i].grades[test];
    return max;
}

// lowest score for one test column
int testMin(const StudentGrade students[], int count, int test) {
    if (count == 0) return 0;
    int min = students[0].grades[test];
    for (int i = 1; i < count; i++)
        if (students[i].grades[test] < min)
            min = students[i].grades[test];
    return min;
}

// average of all students' averages
float classAverage(const StudentGrade students[], int count) {
    if (count == 0) return 0;
    float sum = 0;
    for (int i = 0; i < count; i++)
        sum += students[i].average;
    return sum / count;
}

// highest student average
float classMax(const StudentGrade students[], int count) {
    if (count == 0) return 0;
    float max = students[0].average;
    for (int i = 1; i < count; i++)
        if (students[i].average > max)
            max = students[i].average;
    return max;
}

// lowest student average
float classMin(const StudentGrade students[], int count) {
    if (count == 0) return 0;
    float min = students[0].average;
    for (int i = 1; i < count; i++)
        if (students[i].average < min)
            min = students[i].average;
    return min;
}

// percent of students who got a given letter grade
float letterPercent(const StudentGrade students[], int count, char letter) {
    if (count == 0) return 0;
    int matches = 0;
    for (int i = 0; i < count; i++)
        if (students[i].letterGrade == letter)
            matches++;
    return matches * 100.0 / count;
}

// writes the full report to cout or a file 
void writeReport(ostream & out, const StudentGrade students[], int count) {
    const int LINE = 103;
    out << setw(60) << right << "CSCI 111 Grade Report" << endl;
    out << setw(60) << right << "*********************" << endl << endl;

    // header
    out << setw(LINE) << setfill('=') << "" << setfill(' ') << endl;
    out << setw(20) << left << "First Name" << setw(20) << left << "Last Name";
    for (int t = 0; t < NUM_TESTS; t++)
        out << setw(10) << right << "test" + to_string(t + 1);
    out << setw(15) << right << "Average" << setw(8) << right << "Grade" << endl;
    out << setw(LINE) << setfill('=') << "" << setfill(' ') << endl;

    // one row per student
    out << fixed << setprecision(1);
    for (int i = 0; i < count; i++) {
        out << setw(20) << left << students[i].firstName
            << setw(20) << left << students[i].lastName;
        for (int t = 0; t < NUM_TESTS; t++)
            out << setw(10) << right << students[i].grades[t];
        out << setw(15) << right << students[i].average
            << setw(8) << right << students[i].letterGrade << endl;
    }
    out << setw(LINE) << setfill('*') << "" << setfill(' ') << endl;

    // class stats
    out << setw(40) << left << "Averages";
    for (int t = 0; t < NUM_TESTS; t++)
        out << setw(10) << right << testAverage(students, count, t);
    out << setw(15) << right << classAverage(students, count) << endl;

      out << setw(40) << left << "Maximums";
    for (int t = 0; t < NUM_TESTS; t++)
        out << setw(10) << right << testMax(students, count, t);
    out << setw(15) << right << classMax(students, count) << endl;

    out << setw(40) << left << "Minimums";
    for (int t = 0; t < NUM_TESTS; t++)
        out << setw(10) << right << testMin(students, count, t);
    out << setw(15) << right << classMin(students, count) << endl << endl;

    // letter grade percents
    char letters[] = {'A', 'B', 'C', 'D', 'F'};
    for (int i = 0; i < 5; i++)
        out << letters[i] << "% = " << letterPercent(students, count, letters[i]) << "%" << endl;
}