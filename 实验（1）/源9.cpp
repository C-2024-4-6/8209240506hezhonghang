#include <iostream>
#include<string>
using namespace std;
int main()
{
	cout << "������һ���ַ���:";
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
	cout << "��ĸ����Ϊ" << a<<endl;
	cout << "���ָ���Ϊ" << b << endl;
	cout << "�ո����Ϊ" << c << endl;
	cout << "�����ַ�����Ϊ" << d << endl;
	return 0;
}
