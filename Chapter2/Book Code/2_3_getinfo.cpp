#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int carrots;

	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	cout << "Here are two more. now you have " << carrots + 2 << " carrots. " << endl ;

	return 0;
}