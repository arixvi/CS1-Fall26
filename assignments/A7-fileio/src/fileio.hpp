#pragma once

#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 50;
const int NUM_TESTS = 4;

// one student record
struct StudentGrade {
    string firstName;
    string lastName;
    int grades[NUM_TESTS];
    float average;
    char letterGrade;
};

// reading data
int readData(const string & fileName, StudentGrade students[]);

// one student
float findAverage(const StudentGrade & s);
char findLetterGrade(float average);

// sorting 
bool compareGreater(const StudentGrade & s1, const StudentGrade & s2);
void sortStudents(StudentGrade students[], int count);

// class stats for one test column
float testAverage(const StudentGrade students[], int count, int test);
int testMax(const StudentGrade students[], int count, int test);
int testMin(const StudentGrade students[], int count, int test);

// class stats for the Average column
float classAverage(const StudentGrade students[], int count);
float classMax(const StudentGrade students[], int count);
float classMin(const StudentGrade students[], int count);

// percent of students with a letter grade
float letterPercent(const StudentGrade students[], int count, char letter);

// report 
void writeReport(ostream & out, const StudentGrade students[], int count);