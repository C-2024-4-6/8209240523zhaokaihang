#include <iostream>
#include <iomanip>
using namespace std;
void px(double arr[]) {
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < 9; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}
int main() {
    double arr[10];
    cout << "请输入10个双精度数字：" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    px(arr);
    cout << "排序后的数字是：" << endl;
    for (int i = 0; i < 10; i++) {
        cout << fixed << setprecision(2) << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

