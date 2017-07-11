#include <iostream>
using namespace std;

// Function 1
void F1_CountingUp()
{
	cout << "F1_CountingUp" << endl;
	cout << "WHILE LOOP\n";
	int i = 0;
	while (i < 10)
	{
		cout << i << "\t";
		i++;
	}
	cout << "\nFOR LOOP\n";
	for (int i = 0; i < 10; i++)
	{
		cout << i << "\t";
	}

}

// Function 2
void F2_MultiplyUp()
{
	
	int i = 1;
	cout << "F2_MultiplyUp" << endl;
	cout << "WHILE LOOP" << endl;
	while (i < 200)
	{
		cout << i << "\t";
		i = i * 2;	
	}
	cout << "\nFOR LOOP\n";
	for (int i = 1; i < 200; i = i * 2)
	{
		cout << i << "\t";
	}

}

// Function 3
void F3_NumberGuesser()
{
	cout << "F3_NumberGuesser" << endl;
	int secretNumber = 4;
	int playerGuess;
	do
	{
		cout << "guess a number!" << endl;
		cin >> playerGuess;
		if (playerGuess < secretNumber)
		{
			cout << "\nToo low!\n";
		}
		else if (playerGuess > secretNumber)
		{
			cout << "\nToo high!\n";
		}

	} while (playerGuess != secretNumber);
	cout << "You Win!";
}

// Function 4
void F4_InputValidator()
{
	cout << "F4_InputValidator" << endl;
	cout << "Please enter a number between 0 and 5\n";
	int choice;
	cin >> choice;
	while (choice < 0 || choice > 5)
	{
		cout << "invalid entry. Try again:\n";
		cin >> choice;
	}
	cout << "Thank you";

}

// Function 5
void F5_GettingARaise()
{
	cout << "F5_GettingARaise" << endl;
	float startingWage, percentRaisePerYear, adjustedWage;
	int yearsWorked;
	cout << "Please enter your starting wage: ";
	cin >> startingWage;
	cout << "\nPlease enter your percentage raise per year: ";
	cin >> percentRaisePerYear;
	cout << "\nPlease enter number of years worked: ";
	cin >> yearsWorked;
	adjustedWage = startingWage; 
	for (int i = 0; i < yearsWorked; i++)
	{
		adjustedWage = (adjustedWage * percentRaisePerYear) + adjustedWage;
	}
	cout << adjustedWage;
}

// Function 6
void F6_Summation()
{
	cout << "F6_Summation" << endl;
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum = (i+1) + sum;
	}
	cout << sum;
}

/* Don't modify the code below! ****************************************/

int main()
{
	F1_CountingUp();
	cout << endl << endl;

	F2_MultiplyUp();
	cout << endl << endl;

	F3_NumberGuesser();
	cout << endl << endl;

	F4_InputValidator();
	cout << endl << endl;

	F5_GettingARaise();
	cout << endl << endl;

	F6_Summation();
	cout << endl << endl;


	cout << endl << endl;
	while (true);
	return 0;
}