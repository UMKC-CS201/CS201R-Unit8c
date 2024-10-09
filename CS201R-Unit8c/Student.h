#pragma once
#include "Person.h"

//UPDATE: make student a derived class of person class
class Student : public Person{
private:
	float gpa;

public:
	//constructors: default
	Student();

	//constructor: overloaded - create 
	Student(char t, string l, string f, int a, float g);

	//ADD accessor & mutator for gpa
	float getGPA() { return gpa; }
	void setGPA(float g) { gpa = g; }

	void print();
	static int totalStudent;
};
