#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float a = 3.14;
	cout << "output in float 1 type:" << a << endl;
	cout << "output in int type:" << static_cast<int>(a) << endl;
	return 0;
}
