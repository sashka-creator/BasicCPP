#include "func.h"
#include <iostream>
using namespace std;

double sum(double x, double y)
{
	return x + y;
}

int input(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "type num" << i + 1 << "-> ";
        cin >> arr[i];
        cout << endl;
    }
    return *arr;
}

void out(int* arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
}

double min(int numOne, int numTwo)
{
    if (numOne > numTwo) 
    {
        cout << "Low" << numOne << "-> ";
    }
    else {
        cout << "Low" << numTwo << "-> ";
    }
    
    return numOne, numTwo;
}


double max(int numOne, int numTwo)
{
    if (numOne > numTwo)
    {
        cout << "Max" << numOne << "-> ";
    }
    else {
        cout << "Max" << numTwo << "-> ";
    }

    return numOne, numTwo;
}