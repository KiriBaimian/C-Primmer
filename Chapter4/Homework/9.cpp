//9.cpp

#include "iostream"
#include "cstring"
using namespace std;


struct Candy
{
	string name;
	double weight;
	int calories;
};

int main()
{
	int fatties;
	cout << "How many fatties(candies) do you want: ";
	cin >> fatties;
	cin.get();
	Candy* fat = new Candy[fatties];

	for (int i = 0; i < fatties; ++i)
	{
		cout << "ok, name of the " << i+1 << "th fatty: ";
		getline(cin, fat[i].name);


		cout << "ok, weight of the " << i+1 << "th fatty: ";
		cin >> fat[i].weight;
		cin.get();

		cout << "ok, calories of the " << i+1 << "th fatty: ";
		cin >> fat[i].calories;
		cin.get();
	}


	for (int i = 0; i < fatties; ++i)
	{
		cout << " " << endl;
		cout << "ok, name of the " << i+1 << "th fatty is " << fat[i].name << endl;
		cout << "ok, weight of the " << i+1 << "th fatty is " << fat[i].weight << endl;
		cout << "ok, calories of the " << i+1 << "th fatty is " << fat[i].calories << endl;
	}


	delete [] fat;
	return 0;

}