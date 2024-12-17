#include <iostream>
#include <string>
using namespace std;
int parseHex(const string& hexString)
{
    int result = 0;
    for (int i = 0; i < hexString.length(); ++i) 
    {
        char Char = hexString[i];
        int q;
        if (Char >= '0' && Char <= '9')
        {
            q = Char - '0';
        }
        else if (Char >= 'A' && Char <= 'F')
        {
            q = Char - 'A' + 10;
        }
        else if (Char >= 'a' && Char <= 'f')
        {
            q = Char - 'a' + 10;
        }
        else
        {
            return -1;
        }
        result = result * 16 + q;
    }
    return result;
}
int main()
{
    string hexString;
    cout << "请输入一个十六进制数: ";
    cin >> hexString;
    int decimalValue = parseHex(hexString);
    if (decimalValue != -1) 
    {
        cout << "十六进制数 " << hexString << " 转换为十进制数为: " << decimalValue << endl;
    }
    else
    {
        cout << "输入的十六进制数无效!" << endl;
    }
    return 0;
}

