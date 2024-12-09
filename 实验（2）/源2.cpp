#include<iostream>
using namespace std;
bool is_prime(int num)
{
	if (num == 1)
		return false;
	else if(num>1)
	for (int a = 2; a < num; a++)
	{
		if (num % a == 0)
			return false;
	}
	return true;
}
int main()
{
	int m=0,num=0,i=0;
	while (m <200)
	{
		i++;
		if (is_prime(i) == 1)
		{
			cout << i << " ";
			m++;
			num++;
			if (num % 10 == 0)
				cout << endl;
		}
	}
}