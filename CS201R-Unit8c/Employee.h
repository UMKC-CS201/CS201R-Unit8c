#pragma once
#include "Staff.h"

class Employee : public Staff {
private:
	float vacaHours;

public:
	Employee() : Staff() {
		vacaHours = 0.0;
	}

	Employee(char t, string l, string f, int a,
		int h, float hr, float v)
		: Staff(t, l, f, a, h, hr) {
		vacaHours = v;
	}

	float getVacaHours() { return vacaHours; }
	void setVacaHours(float v) { vacaHours = v; }

	void print() {
		cout << type << setw(15) << lname
			<< setw(15) << fname << setw(10) << age
			<< setw(10) << hours << ", " << hrlyRate 
			<< ", " << vacaHours << endl;
	}
	static int totalEmployee;
};
