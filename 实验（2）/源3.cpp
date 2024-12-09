#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	double cel, fah;
	cout << "Celsius  " << "Fahrenheit  " << "|" << "Celsius  " << "Fahrenheit  " << endl;
	for (cel = 40.0, fah = 120.0; cel > 30&& fah > 20; cel--, fah = fah - 10)
	{
		cout << cel << "        " << celsius_to_fah(cel) << "        " <<
		"|" << fah << "        " << fahrenheit_to_cels(fah) << "         " << endl;
	}

}