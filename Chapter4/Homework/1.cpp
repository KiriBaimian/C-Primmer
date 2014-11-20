#include "iostream"
#include "cstring"



int main()
{
	using namespace std;
	string first_name;
	string last_name;

	char grade;
	int age;

	cout << "What is your frist name? ";
	cin >> first_name;
	cout << "What is your last name? ";
	cin >> last_name;
	cout << "what letter grade do you deserve?";
	cin >> grade;
	cout << "What is your age?";
	cin >> age;

	cout << last_name << ", " << first_name << endl;
	cout << "Grade: " << char(grade+1) << endl;
	cout << "Age: " << age << endl;

	return 0;
}