#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "Person.h"
#include "Student.h"
#include "Staff.h"
#include "Teacher.h"
#include "Employee.h"

int readFile(vector<Person*>&);
void printVector(vector<Person*>);

