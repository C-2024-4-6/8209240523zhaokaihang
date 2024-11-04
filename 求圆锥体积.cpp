#include <iostream>
using namespace std;
int main() {
	int r, h;
	const float PI = 3.14;
	cout << "请输入圆锥半径 "<< endl;
	cin >>r ;
	cout << "请输入圆锥的高" << endl;
	cin >>h ;
	cout << "圆锥的体积为" <<  PI * r * r * h/3;
	return 0;
}