#include "iostream"
#include "cstring"
using std::endl;
using std::cout;
using std::cin;
using std::string;

int main()
{
	string word;
	cout << "Enter a word: ";
	getline(cin, word);

	for (int i = word.size() - 1; i >= 0 ; --i)
	{
		cout << word[i];
	}

	return 0;
}