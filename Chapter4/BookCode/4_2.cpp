#include <iostream>
#include "cstring"

int main()
{
	/* code */
	using namespace std;
	const int Size = 15;
	char my_name[Size]= "C++owboy!";
	char your_name[Size];
	//int length = strlen(your_name);
	//int array_size = sizeof(your_name);

  	cout << "Howdy! I am " << my_name << "! What is your name?\n ";
  	cin >> your_name;
  	cout << "Well, " << your_name << ", your name has " << strlen(your_name) << " letters and is stored \n";
  	cout << "in an array of " << sizeof(your_name) << "bytes.\n";
  	cout << "Your initial is " << your_name[0] << endl;
  	my_name[3]='\0';
  	cout << "Here are the first 3 characters of my name: " << my_name <<endl;


	return 0;
}