#include <iostream>
#include <stdlib.h>
#include "windows.h"
#include <math.h>
#include<stdio.h>
#include<conio.h>
#include <ctime>
using namespace std;

int row, line, num_1, num_2, front;
long max, min;
int sum;
double cube;

double a(int row, int line)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < line; j++)
		{
			cout << "*  ";
		}
		cout << endl;
	}
	return 0;
}

double b(int n1)
{
	const uint32_t size = front;
	for (size_t i = n1; i > 0; i--)
	{
		sum += i * (i - 1);
	}

	return sum;
}

double c(double n1)
{
	if (n1 / n1 == 1 || n1 / 1 == n1)
	{
		cout << "Ez" << endl;
		return 1;
	}
	else
	{
		cout << "Not ez";
		return 0;
	}
}

double d(double n1)
{
	cube = 3;
	sum = pow(n1, cube);
	return sum;
}

double e(double n1, double n2)
{
	if (n1 > n2)
	{
		cout << n1 << " Is bigger than " << n2 << endl;
		return 1;
	}
	else
	{
		cout << n2 << " Is bigger than " << n1 << endl;
		return 0;
	}
}
double f(double n1)
{
	if (n1 > 0)
	{
		cout << "TRUTH" << endl;
		return 1;
	}
	else
	{
		cout << "FALSE" << endl;
		return 0;
	}
}
int main()
{

	int Zadacha;

	cout << "\t\t\t#>---------<MENU>---------<#" << endl;
	cout << "\t\t\t|    1 - Task_1            |" << endl;
	cout << "\t\t\t|    2 - Task_2            |" << endl;
	cout << "\t\t\t|    3 - Task_3            |" << endl;
	cout << "\t\t\t|    4 - Task_4            |" << endl;
	cout << "\t\t\t|    5 - Task_5            |" << endl;
	cout << "\t\t\t|    6 - Task_6            |" << endl;
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
		cout << "Number 1 ";
		cin >> row;
		cout << "Number 2 ";
		cin >> line;
		cout << a(row, line);
	}break;
	case 2:
	{
		cout << "Number 1";
		cin >> num_1;
		cout << b(num_1);
	}break;
	case 3:
	{
		cout << "Number 1";
		cin >> num_1;
		cout << c(num_1);
	}break;
	case 4:
	{
		cout << "Number 1";
		cin >> num_1;
		cout << d(num_1);
	}break;
	case 5:
	{
		cout << "Number 1";
		cin >> num_1;
		cout << "Number 2";
		cin >> num_2;
		cout << e(num_1, num_2);
	}break;
	case 6:
	{
		cout << "Number 1";
		cin >> num_1;
		cout << f(num_1);
	}break;
	}
}