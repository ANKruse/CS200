#include <iostream>
#include <string>
using namespace std;

int main()
{
	float score;
	float total;
	float finalScore;
	cout << "what was your score? ";
	cin >> score;
	cout << "\nwhat was the total points? ";
	cin >> total;
	finalScore = 100 * score / total;
	cout << "\nScore: " << finalScore << "%";
	if (finalScore >= 70)
	{
		cout << "     Pass";
	}
	else
	{
		cout << "     Fail";
	}

	while (true);
	return 0;
}