#include<iostream>
using namespace std;
int main()
{
	double a,b,c;
	cout << "������һ����";
	cin >> a;
	if (a > 0)
	{
		b = a;
		c = a;
		do {
			a = b;
			b = (1.0 / 2) * (a + c / a);
		} while (a - b > 1e-5);
		cout << "������ƽ����Ϊ" << a << endl;
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
		cout << "������ƽ����Ϊ" << a <<"i" << endl;
	}
	else  cout << "������ƽ����Ϊ" << 0.0;
	return 0;
}
//