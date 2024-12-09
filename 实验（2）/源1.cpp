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
	cout << "请输入两个正整数:";
	cin >> a >> b;
	const int c = a, d = b;
	a = c > d ? c : d;
	b = c > d ? d : c;
	cout << "这两个数的最大公约数为:" << gcd(a, b) << endl;
	cout << "这两个数的最小公倍数为:" << lcm(a, b) << endl;
}