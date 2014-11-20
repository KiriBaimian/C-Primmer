#include <iostream>

// 1 degree = 60 mins = 60 seconds
int main()
{
	using namespace std;

	/* code */
	const int mins_to_secs = 60;
	const int degrees_to_mins = 60;
	int degrees;
	int minutes;
	int seconds;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout <<"Enter a latitude in degrees, minutes, and seconds; \n";
	cout <<"First, enter the degrees: ";
	cin >> degrees;
	cout <<"Next,enter the minutes of arc: ";
	cin >> minutes;
	cout <<"Finally, enter the seconds of arc: ";
	cin >> seconds;

	double total_degrees = (double)degrees + (double)seconds/mins_to_secs + (double)minutes/mins_to_secs;


	cout << degrees << " degrees," << minutes << " minutes, " << seconds << " seconds = " << total_degrees << " degrees";

	return 0;
}