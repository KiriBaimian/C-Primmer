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

	//Get Pizzas
	int p_number;
	cout << "How many piece of Pizza would you want: " << endl;
	cin >> p_number;
	cin.get();

	//Create arrays to hold informations of pizzas based on the number
	//of pizzas that users entered.
	Pizza* info = new Pizza[p_number];

	
	//Get information from users
	//Ask them p_number times.
	for (int i = 0; i < p_number; i ++){
		cout << "How would you want your " << i+1 << "th Pizza to be made? " << endl;
		cout << "Diameter of the Pizza: ";
		cin >> info[i].diameter;
		cin.get();

		cout << "Name of the Pizza: ";
		getline(cin,info[i].name);

		cout << "Weight of the Pizza: ";
		cin >> info[i].weight;
		cin.get();

	}

	//Pring the goodies.
	
	for (int i = 0; i < p_number; i ++){
		cout << " " << endl; 
		cout << " " << endl;
		cout << "Diameter of " << i+1 << "th Pizza:" << info[i].diameter << endl;
		cout << "Name of " << i+1 << "th Pizza:" << info[i].name << endl;
		cout << "Weight of " << i+1 << "th Pizza:"<< info[i].weight << endl;

	}

	delete [] info;

	return 0;
}