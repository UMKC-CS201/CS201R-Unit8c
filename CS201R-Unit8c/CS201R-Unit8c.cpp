// CS201R-Unit8c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Functions.h"

int Person::totalPerson = 0;
int Student::totalStudent = 0;


int main() {
    vector <Person> thePeople;
    vector <Student> students;

    //ADD: a student & print student 

    //UPDATE: readFile to read students and add to thePeople
    readFile(thePeople, students);

    //NOTE: printing the vector demonstrates slicing
    printVector(thePeople);
    printVector(students);
}