#include "Designer.h"
#include<iostream>
using namespace std;

Designer::Designer()
{
	cout << "Construct Designer\n";
	name = nullptr;
	age = 20;
	ITcompany = nullptr;
	Salary = 0;

}
Designer::Designer(const char* n, int a, const char* I, double S) :Human(n, a)
{
	cout << "Construct Designer\n";
	Salary = S;
	ITcompany = new char[strlen(I) + 1];
	strcpy_s(ITcompany, strlen(I) + 1, I);
}
Designer::~Designer()
{
	delete[] ITcompany;
	cout << "Destruct Designer\n";
}
void Designer::Output()
{
	cout << "Output Designer\n";
	Human::Output();
	cout << "ITcompany: " << ITcompany << endl
		<< "Salary: " << Salary << endl << endl;
}
void Designer::Input(const char* n, int a, const char* I, double S)
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