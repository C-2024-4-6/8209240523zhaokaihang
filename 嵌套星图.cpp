#include <iostream>
using namespace std;
int main()
{
	int a=0;
	for (;a <= 4;a++)
	{
		int b = 0;
		for (;b <= a;b++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}