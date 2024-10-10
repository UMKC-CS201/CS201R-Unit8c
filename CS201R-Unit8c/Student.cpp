#include "Student.h"

Student::Student() : Person() {
	type = 'S';
	gpa = 0.0;
}

Student::Student(char t, string l, string f, int a, float g)
	:Person(t, l, f, a) {
	gpa = g;
}

void Student::print() {
	cout << type << setw(15) << lname
		<< setw(15) << fname << setw(10) << age
		<< setw(18) << gpa << endl;

}
