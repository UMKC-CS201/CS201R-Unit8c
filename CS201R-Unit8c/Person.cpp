#include "Person.h"

Person::Person() {
	type = 'P';
	lname = " ";
	fname = " ";
	age = 0;
	Person::totalPerson++;
}

Person::Person(string l, string f, int a) {
	type = 'P';
	lname = l;
	fname = f;
	age = a;
	Person::totalPerson++;
}

Person::Person(char t, string l, string f, int a) {
	type = t;
	lname = l;
	fname = f;
	age = a; 
}

void Person::print() { 
		cout << type << setw(15) << lname
			<< setw(15) << fname << setw(10) << age << endl;
}