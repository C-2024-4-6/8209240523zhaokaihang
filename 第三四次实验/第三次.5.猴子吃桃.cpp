#include <iostream>
using namespace std;
int hzzt(int n) {
    if (n == 10) {
        return 1; // 第10天结束时剩下1个桃子
    }
    else {
        return 2 * (hzzt(n + 1) + 1);
    }
}
int main() {
    int a = hzzt(1); 
    cout << "猴子第一天共摘了 " << a << " 个桃子。" << endl;
    return 0;
}

    
