#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	double a,m,n;
	cout << "请输入需要求的数：";
	cin >> a;
	n = a;
	m = 0.5* (n + a / n);
	while(abs(m-n) >= 1e-5)
	{ 
		n = m;
		m = 0.5 * (n + a / n);
	}
	cout << "其平方根为"<<m << endl;
	return 0;
}