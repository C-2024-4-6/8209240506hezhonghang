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
    cout << "����������Ԫ�ظ���: ";
    cin >> size;
    int* a = new int[size];
    int* b = a;
    cout << "������ " << size << " ������:";
    for (int i = 0; i < size;i++)
    {
        cin >> a[i];
    }
    cout << "������������:";
    for (int i = 0; i < size; i++)
    {
        cout << *b << " ";
        b++;
    }
    cout << endl;
    swap(a, size);
    cout << "����������Ϊ:";
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    delete[] a;
    return 0;
}