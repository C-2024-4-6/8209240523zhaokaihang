#include<iostream>
using namespace std;
class Time             
{
private:
	int hour;
	int minute;
	int sec;
public:
	void settime()
	{
		cout << "分别输入时分秒"<<endl;
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}
	void showtime()
	{
		cout << "时间为:   ";
		cout << hour << ":" << minute << ":" << sec;
	}
};
int main()
{
	Time t1;
	t1.settime();
	t1.showtime();
	return 0;
}