#include <iostream>


int main()
{
	/* code */

	using namespace std;
	const int ft_to_inch = 12;
	const double inch_to_meter = 0.0254;
	const double pounds_to_kg = 2.2;

	int feets;
	int inches;
	int pounds;

	cout << "How are you? Welcome to our BMI testing, now I would like to ask you some questions\n";
	cout << "What is your height (enter feet only for now___\b\b\b)";
	cin >> feets;
	cout << "Great, what about the inches now?___\b\b\b";
	cin >> inches;
	cout << "fabulous, can I also get your weight in pounds?___\b\b\b";
	cin >> pounds;

	int feetinches = feets * ft_to_inch;
	int totalinches = feetinches + inches;
	double meters = totalinches * inch_to_meter;
	double kg = pounds / pounds_to_kg;

	double bmi = kg/ (meters * meters);

	cout << "Great, your BMI according to your information is " << bmi << endl;

	return 0;
}