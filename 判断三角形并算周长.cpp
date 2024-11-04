#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	while (1) {
		cout << "输入边长" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a + b > c && b + c > a && a + c > b)
		{
			cout << "周长等于" << a + b + c << endl;
			if (a == b || b == c || a == c)
			{
				cout << "该三角形是等腰三角形" << endl;
			}
			else
			{
				cout << "该三角形不是等腰三角形" << endl;
			}
		}
		else
		{
			cout << "不能构成三角形" << endl;
		}
	}
	return 0;
}