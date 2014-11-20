#include "iostream"
#include "cstring"

int main()
{
	using namespace std;

	string first_name;
	string last_name;

	cout << "First name: ";
	getline(cin , first_name);

	cout << "last_name: ";
	getline(cin, last_name);

	cout << last_name << " "<< first_name<< endl; 


	return 0;
}