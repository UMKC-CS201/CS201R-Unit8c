// CS201R-Unit8c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//https://github.com/UMKC-CS201/CS201R-Unit8c

#include "Functions.h"

int Person::totalPerson = 0;
int Student::totalStudent = 0;
int Teacher::totalTeacher = 0;
int Employee::totalEmployee = 0;

int main() {
    vector <Person*> thePeople;


    //UPDATE: readFile to read students and add to thePeople
    readFile(thePeople);

    //NOTE: printing the vector demonstrates slicing
    printVector(thePeople);
}