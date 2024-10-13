#include "Programmer.h"
#include<iostream>
using namespace std;

Programmer::Programmer()
{
	cout << "Construct Programmer\n";
	name = nullptr;
	age = 20;
	ITcompany = nullptr;
	Salary = 0;

}
Programmer::Programmer(const char* n, int a, const char* I, double S) :Human(n, a)
{
	cout << "Construct Programmer\n";
	Salary = S;
	ITcompany = new char[strlen(I) + 1];
	strcpy_s(ITcompany, strlen(I) + 1, I);
}
Programmer::~Programmer()
{
	delete[] ITcompany;
	cout << "Destruct Programmer\n";
}
void Programmer::Output()
{
	cout << "Output Programmer\n";
	Human::Output();
	cout << "ITcompany: " << ITcompany << endl
		<< "Salary: " << Salary << endl << endl;
}
void Programmer::Input(const char* n, int a, const char* I, double S)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	if (ITcompany != nullptr)
	{
		delete[] ITcompany;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;

	Salary = S;
	ITcompany = new char[strlen(I) + 1];
	strcpy_s(ITcompany, strlen(I) + 1, I);
}