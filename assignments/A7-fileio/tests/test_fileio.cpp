#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <cmath>
#include "../src/fileio.hpp"


const float EPSILON = 0.01;

TEST_CASE("findAverage") {
    SUBCASE("mixed scores") {
        StudentGrade s = {"John", "Smith", {100, 95, 85, 90}, 0, ' '};
        CHECK(fabs(findAverage(s) - 92.5) <= EPSILON);
    }
    SUBCASE("all the same") {
        StudentGrade s = {"Sam", "Lee", {80, 80, 80, 80}, 0, ' '};
        CHECK(fabs(findAverage(s) - 80.0) <= EPSILON);
    }
}

TEST_CASE("findLetterGrade") {
    CHECK(findLetterGrade(95) == 'A');
    CHECK(findLetterGrade(90) == 'A');
    CHECK(findLetterGrade(85) == 'B');
    CHECK(findLetterGrade(72) == 'C');
    CHECK(findLetterGrade(60) == 'D');
    CHECK(findLetterGrade(59.9) == 'F');
}

TEST_CASE("compareGreater") {
    StudentGrade a = {"A", "A", {0, 0, 0, 0}, 90, 'A'};
    StudentGrade b = {"B", "B", {0, 0, 0, 0}, 80, 'B'};
    CHECK(compareGreater(a, b) == true);
    CHECK(compareGreater(b, a) == false);
}

TEST_CASE("class stats") {
    StudentGrade students[3] = {
        {"John", "Smith", {100, 95, 85, 90}, 92.5, 'A'},
        {"Jill", "Jones", {56, 89, 99, 70}, 78.5, 'C'},
        {"Sam", "Lee", {45, 60, 52, 58}, 53.75, 'F'}
    };

    SUBCASE("test column stats") {
        CHECK(testMax(students, 3, 0) == 100);
        CHECK(testMin(students, 3, 0) == 45);
        CHECK(fabs(testAverage(students, 3, 0) - 67.0) <= EPSILON);
    }
    SUBCASE("average column stats") {
        CHECK(fabs(classMax(students, 3) - 92.5) <= EPSILON);
        CHECK(fabs(classMin(students, 3) - 53.75) <= EPSILON);
        CHECK(fabs(classAverage(students, 3) - 74.92) <= EPSILON);
    }
    SUBCASE("letter percents") {
        CHECK(fabs(letterPercent(students, 3, 'A') - 33.33) <= EPSILON);
        CHECK(fabs(letterPercent(students, 3, 'B') - 0.0) <= EPSILON);
    }
}

TEST_CASE("sortStudents") {
    StudentGrade students[3] = {
        {"Low", "L", {0, 0, 0, 0}, 50, 'F'},
        {"High", "H", {0, 0, 0, 0}, 95, 'A'},
        {"Mid", "M", {0, 0, 0, 0}, 75, 'C'}
    };
    sortStudents(students, 3);
    CHECK(students[0].firstName == "High");
    CHECK(students[1].firstName == "Mid");
    CHECK(students[2].firstName == "Low");
}

TEST_CASE("readData") {
    StudentGrade *students = new StudentGrade[MAX_STUDENTS];
    int count = readData("data/students.txt", students);
    CHECK(count == 5);
    CHECK(students[0].firstName == "John");
    CHECK(students[0].letterGrade == 'A');
    delete[] students;
}