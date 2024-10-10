#pragma once

#include "Person.h"

class Staff : public Person {
protected:
	int hours;
	float hrlyRate;

public:
	Staff() : Person() {
		hours = 0;
		hrlyRate = 0.0;
	}

	Staff(char t, string l, string f, int a, int h, float hr)
	: Person(t, l, f, a){
		hours = h;
		hrlyRate = hr;
	}

	int getHours() { return hours; }
	float getHrly() { return hrlyRate; }
	void setHours(int h) { hours = h; }
	void setHrly(float hr) { hrlyRate = hr; }
	virtual void print() = 0;  //this identifies this as abstract class
};