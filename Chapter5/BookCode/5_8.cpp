#include "iostream"
#include "cstring"
using namespace std;

int main()
{
	cout << "The Amazing Accounto will sum and average five numbers for you\n";
	cout << "Please enter five values: \n";

	double value;
	double sum;

	for (int i = 0; i < 5; ++i)
	{
		cout << "Value " << i+1 << ": ";
		cin >> value;
		cin.get();
		sum += value;
	}
		cout << "They sum to " << sum << endl;
		cout << "and average to " << sum/5 << endl;

	return 0;
}