#include <iostream>
#include "windows.h"
#include <math.h>
#include <ctime>
using namespace std;

double date(int a, double b, double c, int d, double e, double f)
{
	if (a % 4)
	{
		c++;
	}
	if (d % 4)
	{
		f++;
	}
	cout << "Years" << c - a << "; months - " << e - b << "; days - " << f - c << endl << endl;
	return 1;
}

double arry(double arr[], double sum)

{
	for (size_t i = 0; i < 6; i++)
	{
		sum += arr[i];
	}
	cout << endl << sum / 6 << " Average" << endl << endl;
	return 1;
}

double arry(double arr[], double plus, double minus, double zero)

{
	for (size_t i = 0; i < 6; i++)
	{
		if (arr[i] < 0)
		{
			minus++;
		}
		if (arr[i] > 0)
		{
			plus++;
		}
		if (arr[i] == 0)
		{
			zero++;
		}
	}
	cout << endl << zero << " zero; " << plus << " + num; " << minus << " - num; " << endl << endl;
	return 1;
}

int maximu(int a, int b)

{
	while (a > 0 && b > 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return a + b;
}

int main()
{
	double a, b, c, d, e, f, sum;

	cout << "\t\t\t#>---------<MENU>---------<#" << endl;
	cout << "\t\t\t|    1 - Task_1            |" << endl;
	cout << "\t\t\t|    2 - Task_2            |" << endl;
	cout << "\t\t\t|    3 - Task_3            |" << endl;
	cout << "\t\t\t|    4 - Task_4            |" << endl;
	cout << "\t\t\t#>------------------------<#" << endl;
	cout << "\t\t\t|    Exit - 0              |" << endl;
	cout << "\t\t\t#>------------------------<#" << endl;
	cout << "\t\t\tEnter task =>";
	int number;
	cin >> number;
	system("cls");
	switch (number)
	{
	case 1:
	{
		cout << "year ";
		cin >> a;
		cout << "\n month ";
		cin >> b;
		cout << "\n day - ";
		cin >> c;
		cout << "\n year - ";
		cin >> d;
		cout << "\n month - ";
		cin >> e;
		cout << "\n day - ";
		cin >> f;
		cout << date(a, b, c, d, e, f);
	}break;
	case 2:
	{
		double arr[6], sum = 0;
		for (size_t i = 0; i < 6; i++)
		{
			cout << i << " Num ";
			cin >> arr[i];
		}
		cout << arry(arr, sum);
	}break;
	case 3:
	{
		double arr[6], minus = 0, plus = 0, zero = 0;
		for (size_t i = 0; i < 6; i++)
		{
			cout << i << " Num ";
			cin >> arr[i];
		}
		cout << arry(arr, minus, plus, zero);
	}break;
	case 4:
	{
		cout << "Number 1 ";
		cin >> a;
		cout << "Number 2 ";
		cin >> b;
		cout << maximu(a, b);
	}break;
	}
	return 0;
}