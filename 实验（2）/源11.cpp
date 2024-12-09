#include<iostream>
#include<string>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for (int i = 0; i <= len2 - len1; i++)
	{
		int j;
		for (j = 0; j < len1; j++)
			if (s2[i + j] != s1[j])
				break;
		if (j == len1)
			return i;
	}
	return -1;
}
int main()
{
	char *s1 = new char[127];
	char *s2 = new char[127];
	cout << "Enter the first string:";
	cin.getline(s1, 127);
	cout << "Enter the second string:";
	cin.getline(s2, 127);
	cout << indexof(s1, s2);
}