//7.cpp


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
	Pizza wow;

	cout << "name: ";
	getline(cin, wow.name);

	cout << "diameter: ";
	cin >> wow.diameter;

	cout << "weight: ";
	cin >> wow.weight;


	cout << wow.name << endl;
	cout << wow.diameter<< endl;
	cout << wow.weight << endl;


	return 0;
}