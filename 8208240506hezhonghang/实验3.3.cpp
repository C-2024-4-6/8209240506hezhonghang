#include<iostream>
using namespace std;
class cylinder
{
private:
	int height;
	int length;
	int width;
public:
	void setnumber()
	{
		cout << "Enter the height,length and width:";
		cin >> height;
		cin >> length;
		cin >> width;
	}
	void volume()
	{
		int volume;
		volume = height * length * width;
		cout <<"The volume is:"<< volume;
	}
};
int main()
{
	cylinder c1, c2, c3;
	c1.setnumber();
	c1.volume();
	cout << endl;
	c2.setnumber();
	c2.volume();
	cout << endl;
	c3.setnumber();
	c3.volume();
	return 0;
}