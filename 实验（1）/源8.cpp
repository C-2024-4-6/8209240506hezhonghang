#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "������������:";
	cin >> x >> y;
	int a;
	cout << "��������Ҫ���еļ���(1�Ǽӷ���2�Ǽ�����3�ǳ˷���4�ǳ�����5�����ࣩ:";
	cin >> a;
	switch (2*a/2)
	{
	case 1:cout <<"�����"<<x + y;
		break;
	case 2:cout << "�����" << x-y;
		break;
	case 3:cout << "�����" << x*y;
		break;
	case 4: {
		if (y == 0)
		{
			cout << "error";
		}
		else cout << "�����" << x/y;
		}
	      break;
	case 5: {
		if (y == 0)
		{
			cout << "error";
		}
		else cout << "�����" << x % y;
	    }
		  break;
	default:cout << "��ע������������ݲ���������";
	}
	return 0;
}