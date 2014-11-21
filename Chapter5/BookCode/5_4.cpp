#include "iostream"
using namespace std;
const int SIZE = 16;

int main()
{
	long long factorials[SIZE];

		factorials[0] = 1;

	for (int i = 2; i < SIZE; i++)
	{
		factorials[i] = i * factorials[i-1];
		//cout << i << "! = " << factorials[i];
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << i << "! = " << factorials[i] << endl;
	}

	return 0;
}
