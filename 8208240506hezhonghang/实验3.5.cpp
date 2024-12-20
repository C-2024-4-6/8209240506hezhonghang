#include<iostream>
using namespace std;
class point
{
private:
	int x=60;
	int y=80;
public:
	void setpoint(int i,int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")";
	}
};
int main()
{
	point p1;
	p1.setpoint(6, 8);
	cout << "The new point is:";
	p1.display();
	return 0;
}