//Enter the weight in stone : 15
//15 stone = 210 pounds


#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int weight(int);

int main()
{
	cout << "Enter the weight in stone : ";
	int stone;
	cin >> stone;
	int w = weight(stone);
	cout << stone << " stone = " << w << " pounds" << endl;
	return 0;
}

int weight(int n){
	return n * 14;
}