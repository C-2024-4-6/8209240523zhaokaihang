#include <iostream>
using namespace std;
void gongyinshu(int a,int b) {
	int c;
	if (a > b) {
		c = a % b;
		for (;c != 0;c = a % b)
		{
			a = b;
			b = c;
		}
	}
	else {
		int t;
		t = a;
		a = b;
		b = t;
		c = a % b;
		for (;c != 0;c = a % b)
		{
			a = b;
			b = c;
		}
	}
	cout << "它们的最大公因数为" << b << endl;
}
void gongbeishu(int a, int b) {
	int c;
	int m;
	m = a * b;
	if (a > b) {
		c = a % b;
		for (;c != 0;c = a % b)
		{
			a = b;
			b = c;
		}
	}
	else {
		int t;
		t = a;
		a = b;
		b = t;
		c = a % b;
		for (;c != 0;c = a % b)
		{
			a = b;
			b = c;
		}
	}
	cout << "它们的最小公倍数为" << m/b << endl;
}
int main() {
	cout << "请输入两个自然数";
	int a, b;
	cin >> a >> b;
	gongyinshu(a, b);
	gongbeishu(a, b);
	return 0;
}