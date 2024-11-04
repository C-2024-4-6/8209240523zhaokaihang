#include <iostream>
using namespace std;
int main()
{
		int a, b, c;
		cout << "输入第一个数字" << endl;
		cin >> a;
		cout << "输入第二个数字" << endl;
		cin >> b;
		int m = a * b;
		if (a >= b)
		{
			c = a % b;
			for (;c != 0;c = a % b)
			{
				a = b;
				b = c;
			}
		}
		else
		{
			c = a;
			a = b;
			b = c;
			c = a % b;
			for (;c != 0;c = a % b)
			{
				a = b;
				b = c;

			}
		}
		cout << "它们的最大公约数为" << b<<endl;
		cout << "它们的最小公倍数为" << m / b<<endl;
return 0;
}