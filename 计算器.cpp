#include <iostream>
using namespace std;

int main() {
    double a, b;
    char m;
    while (1) {
        cout << "输入第一个数字：";
        cin >> a;
        cout << "输入运算符（+、-、*、/、%）：";
        cin >> m;
        cout << "输入第二个数字：";
        cin >> b;

        double result;

        switch (m) {
        case '+':
            result = a + b;
            cout << "结果是：" << result << endl;
            break;
        case '-':
            result = a - b;
            cout << "结果是：" << result << endl;
            break;
        case '*':
            result = a * b;
            cout << "结果是：" << result << endl;
            break;
        case '/':
            if (b != 0)
            {
                result = a / b;
                cout << "结果是：" << result << endl;
            }
            else
            {
                cout << "除数不能为 0。" << endl;
            }
            break;
        case '%':
            if (static_cast<int>(b) != 0 && static_cast<int>(a) % static_cast<int>(b) >= 0) {
                result = static_cast<int>(a) % static_cast<int>(b);
                cout << "结果是：" << result << endl;
            }
            else
            {
                cout << "对于取余运算，除数不能为 0，且需保证取余结果非负" << endl;
            }
            break;
        default:
            cout << "不支持该运算符" << endl;
        }
    }
  
    return 0;
}