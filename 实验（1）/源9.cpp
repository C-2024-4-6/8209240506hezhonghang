#include <iostream>
#include<string>
using namespace std;
int main()
{
	cout << "请输入一个字符串:";
	string str;
	getline(cin, str);
	int a = 0, b = 0, c = 0, d = 0;
	int len = str.size();
	for (int i = 0; i < len; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			a = a++;
		else if (str[i] >= '0' && str[i] <= '9')
			b = b++;
		else if (str[i] == ' ')
			c = c++;
		else d = d++;
	}
	cout << "字母个数为" << a<<endl;
	cout << "数字个数为" << b << endl;
	cout << "空格个数为" << c << endl;
	cout << "其他字符个数为" << d << endl;
	return 0;
}
