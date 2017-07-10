#include <iostream>
#include <string>
using namespace std;

int main()
{
	string students[3] = { "abe", "linda", "luke" };
	
	cout << "enter 0, 1, or 2:";
	
	int choice;
	cin >> choice;
	
	string* ptrStudent = &students[choice];
	
	cout << endl << "new name: ";
	cin >> *ptrStudent;

	for (int i = 0; i < 3; i++)
	{
		cout << "student " << i << " = " << students[i] << endl;
	}


	
	while (true);
	return 0;
}