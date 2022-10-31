#include <iostream>
#include <stdlib.h>
#include "windows.h"
#include <math.h>
#include<stdio.h>
#include<conio.h>
#include <ctime>
#include <iomanip>
using namespace std;

template <typename T>
void Arr(T arr, const uint32_t size)
{
	double sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	cout << sum / size << endl;
}

template <typename T>
void OverLoad(T a, T b)
{
	if (a > b)
	{
		cout << a << " is bigger than " << b;
	}
	else
	{
		cout << b << " is bigger than " << a;
	}
}

template <typename T>
void OverLoad(T arri)
{
	int max = 0;
	for (size_t i = 0; i < 2; i++)
	{
		if (arri[i] > max)
		{
			max = arri[i];
		}
	}
	cout << "Biggest " << max;
}

template <typename T>
void one(T arrO)
{
	int max = 0;
	for (size_t i = 0; i < 5; i++)
	{
		if (arrO[i] > max)
		{
			max = arrO[i];
		}
	}
	cout << "Biggest " << max;
}

template <typename T>
void two(T arrD)
{
	int max = 0;
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)

			if (arrD[i][j] > max)
			{
				max = arrD[i][j];
			}

	}
	cout << "Biggest " << max;
}

template <typename T, typename T1>
void Func(T p_d, T1 p_i)
{
	cout << setprecision(p_i) << p_d;
}

template <typename T>
void TriVumir(T arrT)
{
	int max = 0;
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)

			for (size_t c = 0; c < 5; c++)

				if (arrT[i][j][c] > max)

					max = arrT[i][j][c];



	}
	cout << "Biggest number " << max;
}

int main()
{
	double a, b, c, aa, bb, cc, sum;
	int arrO[6], arrD[6], arrT[6];

	int Zadacha;

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
	switch (Zadacha)
	{
	case 1:
	{
		const uint32_t size = 6;
		double arr[size]{ 5, 10, 15, 20, 25, 30 };
		Arr(arr, size);
	}break;
	case 3:
	{
		double x;
		int y;
		cout << "Enter double:";
		cin >> x;
		cout << "Enter int:";
		cin >> y;

		Func<double, int>(x, y);
		return 0;
	}break;
	case 4:
	{
		srand(time(0));
		cout << "1 one, 2 - two, 3 - three" << endl;
		int numba; cin >> numba;
		if (numba == 1)
		{
			for (size_t i = 0; i < 6; i++)
			{
				arrO[i] = rand() % 100;
			}
			one(arrO);
		}
	}break;
	case 5:
	{
		cout << "2 - For 2 numbers, 3 - For 3 numbers" << endl;
		int numba; cin >> numba;
		if (numba == 2)
		{
			cout << "\nNumber 1 "; cin >> a;
			cout << "\nNumber 2 "; cin >> b;
			OverLoad(a, b);
		}
		else if (numba == 3)
		{
			cout << "\nNumber 1 "; cin >> a;
			cout << "\nNumber 2 "; cin >> b;
			cout << "\nNumber 3 "; cin >> c;
			int arri[3]{ a, b, c };
			OverLoad(arri);
		}
	}break;
	}
}