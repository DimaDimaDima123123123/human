#pragma once
#include "Human.h"

class Designer : public Human
{
	char* ITcompany;
	double Salary;
public:
	Designer();
	Designer(const char* n, int a, const char* I, double S);
	~Designer();
	void Output();
	void Input(const char* n, int a, const char* I, double S);
};
