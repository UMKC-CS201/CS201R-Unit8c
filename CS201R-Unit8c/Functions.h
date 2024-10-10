#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "Person.h"
#include "Student.h"
#include "Staff.h"
#include "Teacher.h"



int readFile(vector<Person>&, vector<Student> &,vector<Teacher>&);
void printVector(vector<Person>);
void printVector(vector<Student>);
void printVector(vector<Teacher>);

