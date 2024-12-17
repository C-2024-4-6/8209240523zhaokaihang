#include <iostream>
using namespace std;
void merge(const int list1[40], int size1, const int list2[40], int size2, int list3[80]) 
{
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (list1[i] >= list2[j]) {
            list3[k] = list2[j];
            k++;j++;
        }
        else {
            list3[k] = list1[i];
            k++;i++;
        }
    }
    while (i < size1) {
        list3[k] = list1[i];
        k++;i++;
    }
    while (j < size2) {
        list3[k] = list2[j];
        k++;j++;
    }
}
int main()
{
    int size1, size2,size3,list1[40],list2[40],list3[80];
    cout << "输入第一个排列好的数组的长度";
    cin >> size1;
    cout << "输入第一个数组";
    for (int i = 0;i < size1;i++) {
        cin >> list1[i];
    }
    cout << "输入第二个排列好的数组的长度";
    cin >> size2;
    cout << "输入第二个数组";
    for (int i = 0;i < size2;i++) {
        cin >> list2[i];
    }
    size3 = size1 + size2;
    merge(list1, size1, list2, size2, list3);
    cout << "第一个数组为；";
    for (int i = 0;i < size1;i++) {
        cout << list1[i] << " ";
    }
    cout << endl;
    cout << "第二个数组为；";
    for (int i = 0;i < size2;i++) {
        cout << list2[i] << " ";
    }
    cout << endl;
    cout << "合并后的数组为；";
    for (int i = 0;i < size3;i++) {
        cout << list3[i]<<" ";
    }
    return 0;
}
    

