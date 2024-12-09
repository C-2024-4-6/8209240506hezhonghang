#include<iostream>
#include<string>
using namespace std;
int parseHex(char* const hexString)
{
	int a[999],c=0;
	int len = strlen(hexString);
	for (int n = 0; n < len; n++)
	{
		a[n] = static_cast<int>(hexString[n]);
		if (a[n] >= 65 && a[n] <= 70)
			a[n] = a[n] - 55;
		else a[n] = a[n] - 48;
	}
		for (int i = 0; i < len; i++)
			for (int j = len - i - 1; j > 0; j--)
				a[i] *= 16;
	for (int s = 0; s < len; s++)
		c =c+ a[s];
	return c;
}
int main()
{
	char* hexString = new char[127];
	cout << "Enter the string:";
	cin.getline(hexString, 127);
	cout << parseHex(hexString);
}
