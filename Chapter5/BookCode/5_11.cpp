#include "iostream"
#include "cstring"
using namespace std;


int main()
{
	char name[5]= "?ate";

	for (char ch='a'; strcmp(name, "mate"); ++ch)
	{
		cout << name << endl;
		name[0] = ch;
	}

	cout << name <<endl;

	return 0;
}