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
	Candy Mix[3] = {
		{"MnN", 1.1 ,100},
		{"QQ", 2.2, 200},
		{"Wangzai", 3.3 , 300}
	};

	cout << "1. " << Mix[0].name << " " << Mix[0].weight<< " " << Mix[0].calories << endl;
	cout << "2. " << Mix[1].name << " " << Mix[1].weight<< " " << Mix[1].calories << endl;
	cout << "3. " << Mix[2].name << " " << Mix[2].weight<< " " << Mix[2].calories << endl;


	return 0;
}