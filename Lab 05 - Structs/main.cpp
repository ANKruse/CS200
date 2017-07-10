#include <iostream>
#include <string>
using namespace std;

#include "Student.hpp"
#include "Fraction.hpp"
#include "Scholarship.hpp"

void Program1()
{
	Student newStudent;
	newStudent.name = "abe";
	newStudent.degree = "history";
	newStudent.gpa = 3.2;
	cout << "student name: \t" << newStudent.name << endl
		<< "Degree: \t" << newStudent.degree << endl
		<< "GPA: \t\t" << newStudent.gpa << endl;
}

void Program2()
{
	Fraction frac1;
	frac1.setup(2, 3);
	
	Fraction frac2;
	frac2.setup(3, 4);

	Fraction sum = frac1.add(frac2);

	Fraction difference = frac1.divide(frac2);

	Fraction product = frac1.multiply(frac2);

	Fraction quotient = frac1.multiply(frac2);

	frac1.display();
	cout << " plus ";
	frac2.display();
	cout << "\t\t= ";
	sum.display();

	cout << endl;

	frac1.display();
	cout << " minus ";
	frac2.display();
	cout << "\t\t= ";
	difference.display();

	cout << endl;

	frac1.display();
	cout << " multiplied by ";
	frac2.display();
	cout << "\t = ";
	product.display();

	cout << endl;

	frac1.display();
	cout << " divided by ";
	frac2.display();
	cout << "\t= ";
	quotient.display();
	cout << endl;

}

void Program3()
{
	Student students[9];
	
	students[0].name = "ken";
	students[0].gpa = 3.0;
	
	students[1].name = "bob";
	students[1].gpa = 3.0;
	
	students[2].name = "linda";
	students[2].gpa = 4.0;
	
	students[3].name = "tan";
	students[3].gpa = 1.0;
	
	students[4].name = "brick";
	students[4].gpa = 0.2;
	
	students[5].name = "green";
	students[5].gpa = 3.0;
	
	students[6].name = "cat";
	students[6].gpa = 3.5;
	
	students[7].name = "anne";
	students[7].gpa = 2.0;
	
	students[8].name = "stove";
	students[8].gpa = 2.3;
	
	Scholarship Scholarships[3];
	Scholarships[0].Setup("small", 100, &students[0], &students[1], &students[2]);
	Scholarships[1].Setup("medium", 1000, &students[3], &students[4], &students[5]);
	Scholarships[2].Setup("large", 100000, &students[6], &students[7], &students[8]);

	for ( int i = 0; i < 3; i++)
	{
		Scholarships[i].Display();
	}
}

int main()
{
	while (true)
	{
		cout << "1. Program 1" << endl;
		cout << "2. Program 2" << endl;
		cout << "3. Program 3" << endl;
		cout << "Run which lab? ";
		int choice;
		cin >> choice;

		cout << endl << endl;

		switch (choice)
		{
		case 1:     Program1();     break;
		case 2:     Program2();     break;
		case 3:     Program3();     break;
		}

		cout << endl << endl;
	}

	return 0;
}