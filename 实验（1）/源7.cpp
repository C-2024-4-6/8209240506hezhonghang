#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "�����������������ߵı߳�:";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || b == c || a == c)
		{
			cout << "��������Ϊ����������" << endl;
		}
		cout <<"������֮��Ϊ"<< a + b + c << endl;
	}
	else cout << "������������޷�����������";
	return 0;
}