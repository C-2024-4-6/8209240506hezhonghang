#include <iostream>
#include <string>
using namespace std;
void swap(int a[],int size)
{
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if (a[i] > a[j])
            {
                int n;
                n = a[i];
                a[i] = a[j];
                a[j] = n;
            }
}
int main()
{
    int size;
    cout << "请输入数组元素个数: ";
    cin >> size;
    int* a = new int[size];
    int* b = a;
    cout << "请输入 " << size << " 个整数:";
    for (int i = 0; i < size;i++)
    {
        cin >> a[i];
    }
    cout << "调试输入数组:";
    for (int i = 0; i < size; i++)
    {
        cout << *b << " ";
        b++;
    }
    cout << endl;
    swap(a, size);
    cout << "排序后的数组为:";
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    delete[] a;
    return 0;
}