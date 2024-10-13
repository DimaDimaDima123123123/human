#pragma once
#include "Human.h"

class Lawyer : public Human
{
	char* LawAgency;
	double Salary;
public:
	Lawyer();
	Lawyer(const char* n, int a, const char* L, double S);
	~Lawyer();
	void Output();
	void Input(const char* n, int a, const char* L, double S);
};
