#include "iostream"
#include "cstring"

int main()
{
	using namespace std;
	string name;
	string dessert;

	cout << "Enter your name: \n";
	getline(cin,name);

	cout << "Enter your favorite dessert: \n";
	getline(cin,dessert);

	cout << "I have some delicious " << dessert << " for you, " << name << "." << endl;

	return 0;
}