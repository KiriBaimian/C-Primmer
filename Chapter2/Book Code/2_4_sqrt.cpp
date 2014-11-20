#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

int main()
	{
		double area; //this is a function prototype, it is telling the compiler, the user input will be store as type DOUBLE.
		cout << "Enter the floor are, in square feet, of your home : ";
		cin >> area;

		double square = sqrt(area);
		cout << "That's the quivalent of a square " << square << " feet to the side\n";
		cout << "How fascinating!" << endl ;
	
	return 0;
	}	