#include "iostream"
using namespace std;

int main(int argc, char const *argv[])
{
	int fish[] = {5 , 10};
	int *fishPointer = fish;
	cout << *fishPointer + 5 << endl;

	return 0;
}