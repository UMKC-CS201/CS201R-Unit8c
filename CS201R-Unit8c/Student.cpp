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
	cout << type << setw(11) << lname
		<< setw(17) << fname << setw(8) << age
		<< setw(18) << gpa << endl;

}
