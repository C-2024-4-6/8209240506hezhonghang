#include <iostream>
using namespace std;
int main()
{
	float x;
	cout << "x=";
	cin >> x;
	if (x > 0 && x < 10)
	{
		if (x<1)
		cout << "y="<<3-2*x;
		else if (x >= 1 && x < 5)
		cout<<"y =" <<2 / (4 * x) + 1;
		else cout << "y="<<x*x;
	}
	return 0;
}