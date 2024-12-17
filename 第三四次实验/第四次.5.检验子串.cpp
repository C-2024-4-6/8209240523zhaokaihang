#include <iostream>
#include <cstring>
using namespace std;
int indexOf(char s1[], char s2[]) 
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 > len2) 
    {
        return -1;
    }
        for (int i = 0; i <= len2 - len1; ++i) 
        {
            bool sign = true;
            for (int j = 0; j < len1; ++j) 
            {
                if (s2[i + j] != s1[j]) 
                {
                    sign = false;
                    break;
                }
            }
                if (sign) 
                {
                    return i;
                }
        }
}
int main() {
    char s1[50], s2[50];
    cout << "请输入第一个字符串s1: ";
    cin >> s1;
    cout << "请输入第二个字符串s2: ";
    cin >> s2;
    int result = indexOf(s1, s2);
    if (result != -1) 
    {
        cout << "子串 " << s1 << " 在字符串 " << s2 << " 中的下标是: " << result << endl;
    }
    else 
    {
        cout << "子串 " << s1 << " 不在字符串 " << s2 << " 中" << endl;
    }
    return 0;
}