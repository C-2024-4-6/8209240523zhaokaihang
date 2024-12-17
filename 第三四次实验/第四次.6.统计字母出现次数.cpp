#include <iostream>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0;i < 26;i++)
	{
		counts[i] = 0;
	}
	for (int i = 0;s[i]!='\0';i++)
	{
		char ch = s[i];
		if (ch >='A' && ch <='Z')
		{
			ch = ch -('A' - 'a');
		}
		if (ch >= 'a' && ch<= 'z')
		{
			counts[ch - 'a']++;
		}
	}
}
int main()
{
	char s[100];
	int counts[26];
	cout << "输入一串字符" << endl;
	cin.getline(s, 100);
	count(s, counts);
	for (int i = 0;i < 26;i++)
	{
		if (counts[i] > 0)
		{
			cout << char(i + 'a') << ":" << counts[i] <<"次" << endl;
		}
	}
	return 0;
}