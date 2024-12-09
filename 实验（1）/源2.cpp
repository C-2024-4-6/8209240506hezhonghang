#include<iostream>
using namespace std;
int main()
{
	const float PI = 3.14;
	int r, h;
	cout << "请输入圆锥底的半径以及锥高" << endl;
	cin >> r >> h;
	cout << "圆锥的体积为" << PI * r * r * h / 3 << endl;
	return 0;
}