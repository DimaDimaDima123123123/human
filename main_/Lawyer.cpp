#include "Lawyer.h"
#include<iostream>
using namespace std;

Lawyer::Lawyer()
{
	cout << "Construct Lawyer\n";
	name = nullptr;
	age = 20;
	LawAgency = nullptr;
	Salary = 0;

}
Lawyer::Lawyer(const char* n, int a, const char* L, double S) :Human(n, a)
{
	cout << "Construct Lawyer\n";
	Salary = S;
	LawAgency = new char[strlen(L) + 1];
	strcpy_s(LawAgency, strlen(L) + 1, L);
}
Lawyer::~Lawyer()
{
	delete[] LawAgency;
	cout << "Destruct Lawyer\n";
}
void Lawyer::Output()
{
	cout << "Output Lawyer\n";
	Human::Output();
	cout << "LawAgency: " << LawAgency << endl
		<< "Salary: " << Salary << endl << endl;
}
void Lawyer::Input(const char* n, int a, const char* L, double S)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	if (LawAgency != nullptr)
	{
		delete[] LawAgency;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;

	Salary = S;
	LawAgency = new char[strlen(L) + 1];
	strcpy_s(LawAgency, strlen(L) + 1, L);
}