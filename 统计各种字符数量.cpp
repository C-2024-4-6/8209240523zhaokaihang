#include <iostream>
using namespace std;
int main()
{
	int y=0, k = 0, s = 0, q = 0;
	char a;
	cout << "输入一行字符";
	while((a = getchar()) != '\n')
	{
		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		{
			y++;
		}	
		else if (a == ' ')
		{
			k++;
		}
		else if (a >= '0' && a <= '9')
		{
			s++;
		}
		else
		{
			q++;
		}
	}
	
		cout << "英文字母个数：" << y << endl;
		cout << "空格个数：" <<k << endl;
		cout << "数字字符个数：" << s << endl;
		cout << "其它字符个数：" <<q << endl;


	return 0;
}