#include <iostream>
using namespace std;
void bubbleSort(int* arr, int size)
{
    for (int i = 0; i < size - 1; ++i) 
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main() 
{
    int size;
    cout << "请输入数组元素个数：";
    cin >> size;
    int* arr = new int[size];
    cout << "请输入数组元素：" << endl;
    for (int i = 0; i < size; ++i) 
    {
        cin >> arr[i];
    }
    bubbleSort(arr, size);
    cout << "\n排序后的数组：" << endl;
    for (int i = 0; i < size; ++i) 
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}
