#pragma once
#include "Human.h"

class Manager : public Human
{
	char* Company;
	double Salary;
public:
	Manager();
	Manager(const char* n, int a, const char* C, double S);
	~Manager();
	void Output();
	void Input(const char* n, int a, const char* C, double S);
};
