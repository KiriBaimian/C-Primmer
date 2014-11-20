#include "iostream"
#include "cstring"

int main()
{
	using namespace std;
	const int SIZE = 20;
	char first_name[SIZE];
	char last_name[SIZE];
	cout << "Enter your first name: ";
	cin.getline(first_name, SIZE);
	cout << "Last name: ";
	cin.getline(last_name, SIZE);
	cout << last_name << " " << first_name <<endl;
	return 0;
}