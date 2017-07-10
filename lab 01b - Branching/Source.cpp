#include <iostream>
using namespace std;

int main()
{
	float a;
	float b;
	int choice;
	cout << "Enter a: ";
	cin >> a;
	cout << "\nEnter b: ";
	cin >> b;
	cout << "What kind of operation? (1) Add, "
		<< "(2) Subtract, (3) Multiply, (4) Divide\nChoice: ";
	cin >> choice;
	float answer;
	switch (choice)
	{
	case 1:
		answer = (a + b);
		cout << answer;
	break;
	case 2:
		answer = (a - b);
		cout << answer;
	break;
	case 3:
		answer = (a * b);
		cout << answer;
	break;
	case 4:
		answer = (a / b);
		cout << answer;
	break;

	default:
		cout << "invalid choice.";
			
		
	}
while (true);
return 0;
}
