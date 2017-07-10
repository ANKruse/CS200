#ifndef _SCHOLARSHIP_HPP
#define _SCHOLARSHIP_HPP

#include <string>
using namespace std;

#include "Student.hpp"

struct Scholarship
{
public:    
	void Display()
	{
		cout << endl;
		cout << "Scholarship: " << name << ", worth $" << amount << endl;
		cout << "Students:" << endl;

		for (int i = 0; i < 3; i++)
		{
			cout << "\t" << (i + 1) << " "
				<< (*studentptrList[i]).name << "\t\t"
				<< (*studentptrList[i]).gpa << endl;
		}
	}
	void Setup(string newName, float newAmount, Student* student1, Student* student2, Student* student3)
	{
		name = newName;
		amount = newAmount;
		studentptrList[0] = student1;
		studentptrList[1] = student2;
		studentptrList[2] = student3;
	}
private:
	string name;
	float amount;
	Student* studentptrList[3];
};

#endif