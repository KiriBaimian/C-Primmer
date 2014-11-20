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
	Candy *Mix[3] = new Candy[3];
		//Mix[0] = {"MnN", 1.1 ,100},
		//Mix[1] = {"QQ", 2.2, 200},
		//Mix[2] = {"Wangzai", 3.3 , 300}

		Mix[0]


	cout << "1. " << Mix[0] << " " << Mix[0]<< " " << Mix[0]<< endl;
	cout << "2. " << Mix[1] << " " << Mix[1]<< " " << Mix[1]<< endl;
	cout << "3. " << Mix[2] << " " << Mix[2]<< " " << Mix[2]<< endl;

	delete [] Mix;
	return 0;
}