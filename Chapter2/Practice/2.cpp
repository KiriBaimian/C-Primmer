#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int weight(int);

int main()
{
	int units;
	cout << "insert long units: ";
	cin >> units;
	int converts = weight(units);
	cout << units << " long ="  << converts << endl;
	return 0;
}

int weight(int n)
{
	return n * 220;
}