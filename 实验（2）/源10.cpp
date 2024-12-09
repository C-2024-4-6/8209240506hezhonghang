#include<iostream>
using namespace std;
void count(const char s[], int counts[], int num[])
{
int len = strlen(s);
for (int i = 0; i < len; i++)
	for (int j = 0; j < 26; j++)
		if (s[i] == counts[j])
			num[j]++;
}
int main()
{
	int counts[26],num[26];
	char s[127];
	for (int i = 0, j = 97; i < 26 && j < 123; i++, j++)
	{
		counts[i] = j;
		num[i] = 0;
	}
	cout << "Enter a string:";
	cin.getline(s, 127);
	for (int m = 0; m < sizeof(s) / sizeof(s[0]); m++)
		if (s[m] <= 90 && s[m] >= 65)
			s[m] = s[m] + 32;
	count(s,counts,num);
	for (int n = 0; n < 26; n++)
		if (num[n] > 0)
		{
			cout << char(n + 97) << ":" << num[n] << "´Î" << endl;
		}
}