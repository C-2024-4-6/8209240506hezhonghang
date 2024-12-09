#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1 + size2; i++)
		if (i < size1)
			list3[i] = list1[i];
		else if(i>=size1)
			list3[i] = list2[i-size1];
	bool changed = true;
	do
	{
		changed = false;
		for (int i = 0; i < size1+size2-1; i++)
			if (list3[i] > list3[i + 1])
			{
				int n;
				n = list3[i];
			    list3[i] = list3[i + 1];
				list3[i + 1] = n;
				changed = true;
			}
	} while (changed);
}
int main()
{
	int list1[80],a, list2[80],b,list3[160];
	cout << "element number of list1:" ;
	cin >> a;
	cout << "Enter list1:" ;
	for (int i = 0; i < a; i++)
		cin >> list1[i];
	cout << "element number of list2:" ;
	cin >> b;
	cout << "Enter list2:" ;
	for (int j = 0; j < b; j++)
		cin >> list2[j];
	merge(list1, a, list2, b, list3);
	cout << "The merge list is ";
	for (int x = 0; x < a + b; x++)
		cout<< list3[x] << " ";
}