#include<iostream>
using namespace std;
int main()
{
	int a, b, i;
	cout << "请输入两个正整数:";
	cin >> a >> b;
	const int c = a;
	const int d = b;
	if (a > b)
		for (; i = a % b, b % i != 0;)
		{
			a = b, b = i;
		}
	else if (a < b)
	{
		a = d, b = c;
		for (; i = a % b, b % i != 0;)
		{
			a = b, b = i;
		}
	}
	else if (a == b)
		i = a;
		cout << "最大公约数为" << i << endl;
	cout << "最小公倍数为" << c * d / i << endl;
	return 0;
}
/*int main()
{
	int a, b, i;
	cout << "请输入两个正整数:";
	cin >> a >> b;
	for (i = (a > b) ? a : b; i < a * b; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			cout <<"最小公倍数"<< i << endl;
			break;
		}
	}
	cout << "最大公约数" << a * b / i << endl;
	return 0;
}*/

