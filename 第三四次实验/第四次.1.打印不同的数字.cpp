#include <iostream>
using namespace std;
int main() {
    int num[10];
    int a=0;
    int b = 0;
    cout << "输入10个不同的数字";
    for (int i = 0; i < 10; i++) {
        cin >> a;
        bool sign = false;
        for (int j = 0; j < b; j++) {
            if (num[j] == a) {
                sign = true;
                break;
            }
        }
        if (!sign) {
            num[b] = a;
            b++;
        }
    }
    cout << "不同的数有: ";
    for (int i = 0; i < b; i++) {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}
