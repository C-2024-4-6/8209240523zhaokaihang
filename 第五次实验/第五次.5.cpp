#include <iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point(int i=60 , int j = 60):x(i),y(j) {}
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "坐标为（" << x << "，" << y <<")" << endl;
	}
};
int main()
{
	Point point;
	point.setPoint(100, 200);
	point.display();
	return 0;
}