#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	while (b != 0)
	{
		int c;
		c=b;
		b = a % b;
		a = c;
	}
	return a;
}
int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}
int main()
{
	int a, b;
	cout << "����������������:";
	cin >> a >> b;
	const int c = a, d = b;
	a = c > d ? c : d;
	b = c > d ? d : c;
	cout << "�������������Լ��Ϊ:" << gcd(a, b) << endl;
	cout << "������������С������Ϊ:" << lcm(a, b) << endl;
}