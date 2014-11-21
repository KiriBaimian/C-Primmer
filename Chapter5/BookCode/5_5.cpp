#include "iostream"
using namespace std;

int main()
{
	int number;
	cout << "Enter an Int: ";
	cin >> number;
	cin.get();
	cout << "Counting by: " << number << "s: " << endl;

	for (int i = 0; i < 100; i = number + i)
	{
		cout << i << endl;		
	}
	return 0;
}