#include<iostream>
using namespace std;
int main()
{
	int a[10],n,m=0;
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	for (n = 0; n < 10; n++)
	{
		bool is = false;
		for (int j = 0; j <m; j++)
			if (a[n] == a[j])
			{
				is = true; break;
			}
		if (is == false)
		{
			a[m] = a[n];
			m++;
		}
	}
	for (int d = 0; d < m; d++)
		cout << a[d] << " ";
	return 0;
}