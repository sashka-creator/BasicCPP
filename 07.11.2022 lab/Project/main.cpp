#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;

void POWERPUNCH(int userNum, int num = 1, int power = 1, int max = 100)
{
	int plNum = num;
	for (int i = power, k = 1; k <= max; k++)
	{
		if (plNum == userNum)
		{
			cout << userNum << " = " << num << "^" << k << endl;
			break;
		}
		plNum *= i;
	}
	if (plNum != userNum)
		return POWERPUNCH(userNum, num + 1, power + 1);
}

void LINER(int lengh)
{
	for (size_t i = 0; i < lengh; i++)
	{
		cout << "*";
	}
	cout << endl;
}

void fromsum(int from, int to, int sum)
{
	for (size_t i = from; i < to; i++)
	{
		sum += i;
	}
	cout << "The sum of all numbers from " << from << " to " << to << " is " << sum << endl;
}

void ARRER(int arr[100])
{
	int min = 51;
	for (size_t j = 0; j < 1; j++)
	{
		for (size_t i = 0; i < 100; i++)
		{
			if (arr[i] < min)
			{
				min = arr[i];
				cout << i << "; ";
				arr[i] = 1000;
			}

		}
		min = 51;
	}

}

int main()
{
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
		int num, power;
		cout << "Enter a number: ";
		cin >> num;
		cout << "Enter a power of the number: ";
		cin >> power;
		POWERPUNCH(pow(num, power));
		return 0;
	}break;
	case 2:
	{
		int lengh;
		cout << "Enter lengh of line - ";
		cin >> lengh;
		cout << endl;
		LINER(lengh);
		return 0;
	}break;
	case 3:
	{
		int from, to, sum = 0;
		cout << "Start Number: ";
		cin >> from;
		cout << "End Number: ";
		cin >> to;
		fromsum(from, to, sum);
		return 0;
	}break;
	case 4:
	{
		int arr[100];
		srand(static_cast<unsigned int>(time(0)));
		for (size_t i = 0; i < 100; i++)
		{
			arr[i] = rand() % 50;
		}
		ARRER(arr);
	}break;
	}
}