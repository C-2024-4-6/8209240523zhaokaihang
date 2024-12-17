#include <iostream>
using namespace std;
int main() {
    bool gz[100] = { 0 };
    for (int stu = 1;stu < 101;stu++) {
        for (int i = stu - 1;i < 100;i+= stu ) {
            gz[i] = !gz[i];
        }
    }
    cout << "开的柜子有；";
    for (int i = 0;i < 100;i++) {
        if (gz[i]) {
            cout << i+1<<" ";
        }
    }
    return 0;
}
