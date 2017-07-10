#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream input;
	input.open("story.txt");

	string line;

	while (getline(input, line))    // Keep reading in lines of text
	{
		cout << line << endl;   // Display text to the screen
	}
	while(true)
	input.close();
	
	
	return (0);
}