//8.cpp


#include "iostream"
#include "cstring"

using namespace std;

struct Pizza
{
	string name;
	double diameter;
	double weight;
};



int main()
{

	/* code */
	Pizza *lala = new Pizza;

	cout << "name: ";
	getline(cin, *lala.name);

	cout << "diameter: ";
	cin >> *lala.diameter;

	cout << "weight: ";
	cin >> *lala.weight;


	cout << *lala.name << endl;
	cout << *lala.diameter<< endl;
	cout << *lala.weight << endl;


	return 0;
}