#include<iostream>
using namespace std;
int main()
{
	int a, b, i;
	cout << "����������������:";
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
		cout << "���Լ��Ϊ" << i << endl;
	cout << "��С������Ϊ" << c * d / i << endl;
	return 0;
}
/*int main()
{
	int a, b, i;
	cout << "����������������:";
	cin >> a >> b;
	for (i = (a > b) ? a : b; i < a * b; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			cout <<"��С������"<< i << endl;
			break;
		}
	}
	cout << "���Լ��" << a * b / i << endl;
	return 0;
}*/

