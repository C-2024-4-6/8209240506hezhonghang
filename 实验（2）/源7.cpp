#include<iostream>
using namespace std;
int main()
{
	bool a[100];
	for (int i = 0; i < 100; i++)
	{
		a[i] = false;
	}
	for (int n = 0; n < 100; n++)
	{
		for (int m = 0; m < 100; m++)
		{
			if ((m + 1) % (n + 1) == 0)
				a[m] = !a[m];
		}
	}
	for(int j=0;j<100;j++)
	{
		if (a[j])
		{
			cout << j+1 << " ";
		}
	}
	cout << endl;
	return 0;
}
/*int main()
{
	for (int n = 0; n < 100; n++)
		for (int m = n; m < 100; m += n + 1)
			cout << m << " ";
}*/
/*int main()
{
	for (int x = 0; x < 100; x++)
		for (int y = 0; y < 100; y++)
			if ((y + 1) % (x + 1) == 0)
				cout << y << " ";
}*/
