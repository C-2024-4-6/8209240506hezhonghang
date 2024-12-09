#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "请输入两个数:";
	cin >> x >> y;
	int a;
	cout << "请输入你要进行的计算(1是加法，2是减法，3是乘法，4是除法，5是求余）:";
	cin >> a;
	switch (2*a/2)
	{
	case 1:cout <<"结果是"<<x + y;
		break;
	case 2:cout << "结果是" << x-y;
		break;
	case 3:cout << "结果是" << x*y;
		break;
	case 4: {
		if (y == 0)
		{
			cout << "error";
		}
		else cout << "结果是" << x/y;
		}
	      break;
	case 5: {
		if (y == 0)
		{
			cout << "error";
		}
		else cout << "结果是" << x % y;
	    }
		  break;
	default:cout << "请注意括号里的内容并重新输入";
	}
	return 0;
}