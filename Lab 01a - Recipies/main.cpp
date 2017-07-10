#include <iostream> // input/output library
using namespace std; // standard c++ library namespace

int main()
{
	float ratio;
	float bakingSoda, bakingPowder, butter, sugar, eggs;
	
	cout << "How many batches would you like to make?" << endl;
	cin >> ratio;
	bakingSoda = 1 * ratio;
	bakingPowder = .5 * ratio;
	butter = 1 * ratio;
	sugar = 1.5 * ratio;
	eggs = 1 * ratio;
	cout << bakingSoda <<" tsp     baking soda\n"<< bakingPowder << " tsp   baking powder\n" << butter <<
		" c       butter\n" << sugar << " c   white sugar\n" << eggs <<
		"         egg" << endl;
	while (true);
	return 0;
}