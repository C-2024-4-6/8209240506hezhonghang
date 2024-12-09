#include<iostream>
using namespace std;
/*void swap(double c, double d)
{
	double t;
	t = c;
	c = d;
	d = t;
}*/


void sinking_short(double a[])
{
	bool changed = true;
	do
	{
		changed = false;
		for (int i = 0; i < 9; i++)
			if (a[i] > a[i + 1])
			{
				int n;
				n = a[i];
				a[i] = a[i + 1];
				a[i + 1] = n;
				changed = true;
			}
	} 
	while (changed);
}
int main()
{
	double x[10];
	for (int i = 0; i < 10; i++)
		cin >> x[i];
    sinking_short(x);
	for (int j = 0; j < 10; j++)
		cout << x[j]<<" ";
}