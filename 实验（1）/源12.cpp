#include<iostream>
using namespace std;
int main()
{
	double a,b,c;
	cout << "请输入一个数";
	cin >> a;
	if (a > 0)
	{
		b = a;
		c = a;
		do {
			a = b;
			b = (1.0 / 2) * (a + c / a);
		} while (a - b > 1e-5);
		cout << "该数的平方根为" << a << endl;
	}
	else if (a < 0)
	{
		a = -a;
		b = a;
		c = a;
		do {
			a = b;
			b = (1.0 / 2) * (a + c / a);
		} while (a - b > 1e-5);
		cout << "该数的平方根为" << a <<"i" << endl;
	}
	else  cout << "该数的平方根为" << 0.0;
	return 0;
}
//