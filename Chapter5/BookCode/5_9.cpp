#include "iostream"
#include "cstring"
using namespace std;

char temp;
string word;

int main()
{
	cout << "Enter a word: ";
	getline(cin, word);


	// J is the head index that iterates to the right
	// I is the tail index that iterates to the left
	// The reason it has expression : j<i is because
	// It can't pass the middle character, or everything
	//will reverse again.

	int i, j;
	for (j=0 , i = word.size()-1; j < i; j++, i--)
	{
	temp = word[i];
	word[i] = word[j];
	word[j] = temp;
	}

	cout << word << endl;

	return 0;
}