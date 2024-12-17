
#include <iostream>
#include "mytriangle.h"
using namespace std;
int main() {
    double side1, side2, side3;
    cout << "请输入三角形的三边长：";
    cin >> side1 >> side2 >> side3;
    if (is_valid(side1, side2, side3)) {
        double area = double_area(side1, side2, side3);
        cout << "三角形的面积是: " << area << endl;
    }
    else {
        cout << "错误,不能构成有效的三角形。" << endl;
    }
    return 0;
}
