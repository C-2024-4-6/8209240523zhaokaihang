﻿
#include <iostream>
using namespace std;
bool is_prime(int num) {
    for (int i = 2;i < num;i++)
    {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main()
{
    int num = 2;
    int a = 0;
    while (a < 200) {
        if (is_prime(num)) {
            cout << num << '\t';
            a++;
            if (a % 10 == 0) {
                cout << endl;
            }
        }
        num++;
    }
    return 0;
}

