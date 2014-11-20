#include "iostream"
using namespace std;

void a(void);
void b(void);

int main()
{
	a();
	a();
	b();
	b();
	return 0;
}

void a(){
	cout <<"Three blind mice"<< endl;
}

void b(){
	cout <<"See how they run" << endl;
}