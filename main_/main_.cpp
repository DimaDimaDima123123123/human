#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Programmer.h"
#include "Teacher.h"
#include "Manager.h"
#include "Lawyer.h"
#include "Designer.h"

using namespace std;

int main()
{
	Student a("Oleg", 19, "Itstep", 2000);
	a.Output();
	a.Input("Irina", 20, "Politex", 200);
	a.Output();

	Programmer p("Michael", 30, "Microsoft", 50000);
	p.Output();

	Teacher t;
	t.Input("Sean", 40, "Itstep", 35000);
	t.Output();

	Manager m;
	m.Input("Frank", 42, "Apple", 45000);
	m.Output();

	Lawyer l;
	l.Input("Saul", 45, "Sony", 30000);
	l.Output();

	Designer d;
	d.Input("Ben", 35, "Google", 50000);
	d.Output();

}
