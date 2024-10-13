#pragma once
#include "Human.h"

class Teacher : public Human
{
	char* Univer;
	double Salary;
public:
	Teacher();
	Teacher(const char* n, int a, const char* U, double S);
	~Teacher();
	void Output();
	void Input(const char* n, int a, const char* U, double S);
};
