#include <iostream>
using namespace std;
int main()
{
	char a;
	cout << "������һ���ַ�:";
	cin >> a;
	if (a <= 'z' && a >= 'a')
	{
		a= a - 32;
			cout <<"ת�������ĸΪ" << a << endl;
	}
	else cout << a + 1;
	return 0;
}