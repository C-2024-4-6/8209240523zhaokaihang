#include <iostream>
using namespace std;
int main()
{
	float a,b;
	cout << "输入华氏温度"<<endl;
	cin >> a;
	b = (a - 32) * 5 / 9;
	printf("%.2f\n", b);
	return 0;
}