#include <iostream>
using namespace std;
int main()
{
	char a;
	cout << "请输入一个字符:";
	cin >> a;
	if (a <= 'z' && a >= 'a')
	{
		a= a - 32;
			cout <<"转换后的字母为" << a << endl;
	}
	else cout << a + 1;
	return 0;
}