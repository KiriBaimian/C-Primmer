#include <iostream>

int main(){
	using namespace std;
	const int lbs_per_stone = 14;
	
	cout << "insert a number: ";
	int lbs;
	cin >> lbs;
	int stone = lbs/lbs_per_stone;
	int pounds = lbs%lbs_per_stone;
	cout <<"so your result is " << stone <<" stones and " << pounds <<" pounds" << endl;

	return 0;

}