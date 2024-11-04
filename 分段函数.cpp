#include <iostream>
using namespace std;
int main()
{
	while (1) {
		float x, y;
		cout << "输入自变量x"<<endl;
		cin >> x;
		if (0 < x && x < 10)
		{
			if (x < 1)
			{
				y = 3 - 2 * x;
				cout <<"运算结果为"<< y << endl;
			}
			else if (x < 5)
			{
				y = 2 / (4 * x) + 1;
				cout << "运算结果为" << y << endl;
			}
			else
			{
				y = x * x;
				cout << "运算结果为" << y << endl;
			}
		}
		else
			cout << "x不在定义域内" << endl;
	}
	return 0;
}