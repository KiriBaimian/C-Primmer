#include "iostream"
#include "cstring"
using namespace std;



struct CandyBar
{
	string name;
	double weight;
	int calories;
};


int main()
{
	CandyBar snack =
	{
		"Mocha Munch", 
		2.3,
		350
	};

	cout << snack.name << " " << snack.weight << " " << snack.calories << endl;

	return 0;
}