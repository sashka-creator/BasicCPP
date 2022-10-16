#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "\t\t\t#>---------<MENU>---------<#" << endl;
    cout << "\t\t\t|    1 - Task_1            |" << endl;
    cout << "\t\t\t|    2 - Task_2            |" << endl;
    cout << "\t\t\t|    3 - Task_3            |" << endl;
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
        int min = 0, max = 0;

        const int size = 10;
        int arr[size];

        for (int i = 0; i < size; i++)
        {

            arr[i] = rand() % 10;

            if (arr[i] > 0)
            {
                min = arr[i];
            }
        }

        cout << min << " " << max << endl;

    }break;
    case 2:
    {
        int start, end;
        cout << "Start " << endl;
        cin >> start;

        cout << "End " << endl;
        cin >> end;
     
        const int size = 12;
        int arr[size]{ 10,20,30,40,50,60,70,80,90,100,110,120 };
        int min = arr[start], max = arr[start];

        for (int i = start; i < end; i++)
        {

            if (min > arr[i])
            {
                min = arr[i];
            }
            if (max < arr[i])
            {
                max = arr[i];
            }
        }

        cout << min << " " << max << endl;

    }break;
    case 3:
    {
        int minus = 0, a = 0;
        int min = 0, max = 0;
        const int size = 5;
        int arr[size];

        for (int i = 0; i < size; i++)
        {
            arr[i] = rand() % 50;

            if (arr[i] < 0)
            {
                minus = minus + 1;
            }

            if (min > arr[i])
            {
                min = arr[i];
            }
            if (max < arr[i])
            {
                max = arr[i];
            }

            if (arr[i] == arr[i])
            {
                int a = arr[i] * 2;
            }
        }

        cout << "Minus number " << minus << "\t" << endl;
        cout << "Min " << min << " Max " << max << "\t" << endl;
        cout << "Parni suma " << a << "\t" << endl;

    }break;
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}