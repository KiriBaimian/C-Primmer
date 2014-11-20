//I have 25 carrots.
//Crunch, crunch. Now I have 24 carrots
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int carrots = 25;

	cout << "I have "; 
	cout << carrots ; 
	cout << " carrots. "; 
	cout << endl;
	cout << "Crunch, crunch. Now I have ";
	cout << carrots - 1; 
	cout << " carrots. "; 
	cout << endl;	

	return 0;
}