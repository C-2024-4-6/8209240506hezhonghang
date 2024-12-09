#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float a;
	cout << "请输入华氏温度";
	cin >> a;
	cout << "转化后的摄氏温度为" <<setprecision(4)<<(a - 32) / 1.8 << endl;
	return 0;
}

