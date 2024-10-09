#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//UPDATE: Person so fields can be used by derived class Student
class Person {
protected:
	char type;
	string lname;
	string fname;
	int age;

public:
	Person();                            //constructor: default
	Person(string l, string f, int a);   //constructor: overloaded
	Person(char t, string l, string f, int a);   //constructor: overloaded

	char   getType() { return type; }    //accessor (type)
	int    getAge() { return age; }      //accessor (age)
	string getfName() { return fname; }  //accessor (first name)
	string getlName() { return lname; }  //accessor (last name)

	void   setType(char t) { type = t; }     //mutator (type)
	void   setAge(int a) { age = a; }        //mutator (age)
	void   setfName(string f) { fname = f; }   //mutator (first name)
	void   setlName(string l) { lname = l; }   //mutator (last name)
	void   print();

	static int totalPerson;
};

