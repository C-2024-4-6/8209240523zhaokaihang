#include<iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, day;
    for (day = 0;a <= 100;day++)
    {
        b = b * 2;
        a = a + b;
    }
    cout << "每天平均花"<<0.8 * (a - b) / (day - 1) <<"元" << endl;
    cout << "最终天数为" << day - 1<<endl;
    cout << "总苹果数为" << a - b;
    return 0;
}

