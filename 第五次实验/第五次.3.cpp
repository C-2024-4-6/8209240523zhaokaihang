#include <iostream>
using namespace std;
class cfz
{
private:
	int length, width, height;
public:
	void set()
	{
		cout << "依次设置长宽高"<<endl;
		cin >> length;
		cin >> width;
		cin >> height;
	}
	int area()
	{
		int a,  b,  c;
		a = length;
		b = width;
		c = height;
		int area1;
		area1 = a * b * c;
		return area1;
	}
	void show(int area)
	{
		int q = area;
		cout <<q<<endl;
		
	}
};
int main()
{
	cfz cfz1,cfz2,cfz3;
	cout << "设置第一个长方柱的长宽高"<<endl;
	cfz1.set();
	cout << "设置第二个长方柱的长宽高" << endl;
	cfz2.set();
	cout << "设置第三个长方柱的长宽高" << endl;
	cfz3.set();
	cfz1.area();
	cfz2.area();
	cfz3.area();
	int p = cfz1.area(), o = cfz2.area(), w = cfz3.area();
	cout << "第一个长方柱的体积为：" << endl;
	cfz1.show(p);
	cout << "第二个长方柱的体积为：" << endl;
	cfz2.show(o);
	cout << "第三个长方柱的体积为：" << endl;
	cfz3.show(w);
	return 0;
}