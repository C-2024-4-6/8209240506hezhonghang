#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "请输入三角形三条边的边长:";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || b == c || a == c)
		{
			cout << "该三角形为等腰三角形" << endl;
		}
		cout <<"三条边之和为"<< a + b + c << endl;
	}
	else cout << "输入的三条边无法构成三角形";
	return 0;
}