#include <iostream>

int main()
{
	using namespace std;
	/* code */
	const int inch_per_ft = 12;
	cout << "Hi, Can you tell me you height in inches? ___\b\b\b";
	int height;
	cin >> height;
	int feets = height/12;
	int inches = height%12;
	cout << "Ok, by my accurate calculation, your height is " << feets << " feets and " << inches <<" inches!\n";
	cout << "Have a good day :D ";

	return 0;
}