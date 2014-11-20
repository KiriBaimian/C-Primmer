#include "iostream"
#include "cstring"
using namespace std;


int main()
{
	/* code */
	cout << "Please enter three times of the 40-yd dash";

	double* time = new double[3];

	for (int i = 0; i < 3; ++i)
	{
		/* code */
		cout << "Times for the " << i+1 << "th time: ";
		cin >> time[i];
	}

	for (int i = 0; i < 3; ++i)
	{
		cout << " " << endl; 
		cout << "According to you, times for the " << i+1 << "th time = " << time[i] << endl; 
	}
		double total = time[0] + time[1] + time[2];
		double avg = total/3;
		cout << " " << endl;
		cout << "Avg is " << avg << endl;

	delete [] time;

	return 0;
}