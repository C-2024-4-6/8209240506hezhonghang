#include<iostream>
using namespace std;
int main()
{
	float i = 2.0,a=1.0,b;
	do
	{
		i = i * 2;
		a++;
	} while (i < 100);
	b = 0.8*(2 - i) / (1 - 2)/--a;
	cout << b;
	return 0;
}