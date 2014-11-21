//countdown

#include "iostream"
using namespace std;

int main()
{
	int count_down;
	cout << "Enter the starting countdown value: ";
	cin >> count_down;
	cin.get();

	int i;
	for (i = count_down; i > 0; i--)
	{
		cout << "i =" << i << endl;
	}

		cout << "Done now that i= " << i << endl;

	return 0;
}