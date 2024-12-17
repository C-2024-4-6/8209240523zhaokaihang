#include <iostream>
#include <cstring>
using namespace std;
int indexOf(const char* s1, const char* s2)
{
	const char* p1 = s1;
	const char* p2 = s2;

	for (int i = 0;*p2 != '\0';p2++, i++)
	{
		const char* q2 = p2;
		const char* q1 = p1;
		while (*q2 == *q1 && *q1 != '\0')
		{
			q2++;
			q1++;
		}
		if (*q1 == '\0')
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	char s1[100], s2[100];
	cout << "输入第一个字符串；";
	cin.getline(s1, 100);
	cout << "输入第二个字符串；";
	cin.getline(s2, 100);

	int result = indexOf(s1, s2);
	if (result>0)
	{
		cout << "匹配的下标为" << result << endl;
	}
	else
	{
		cout << "不匹配";
	}
	return -1;
}