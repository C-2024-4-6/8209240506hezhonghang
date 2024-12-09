#include<iostream>
using namespace std;
int fac(int day)
{
	if (day == 10)
		return 1;
	else return (fac(day + 1) + 1) * 2;
}
int main()
{
	int a=1;
	cout <<fac(a);
}