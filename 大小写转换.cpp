#include <iostream>
using namespace std;
int main()
{
    char a;
    while (1) {
    cout << "请输入一个字符：";
    cin >> a;
    
        if (a >= 'a' && a <= 'z')
        {
            cout << char(a - 32) << endl;
        }
        else
        {
            cout << int(a + 1) << endl;
        }
       
    }
    return 0;
    	
}