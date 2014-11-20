#include <iostream>

int main()
{
	using namespace std;
	/* code */
	long long world_population;
	long long us_population;

	cout << "Enter the world's population: ";
	cin >> world_population;
	cout << "Enter the population of the US: ";
	cin >> us_population;

	double decimal = (double)us_population/(double)world_population;
	double percent = 100*decimal;
	cout << "The population of the US is " << percent << "% of the world population \n";

	return 0;
}