#include <iostream>
#include <cmath>

using namespace std;

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
        const int size = 5;
        int sum = 0;
        int arr[size] { 100,200,300,400,500 };

        for (int i = 0; i < size; i++)
        {
            sum = sum + arr[i];
        }

        cout << sum << endl;

    }break;
    case 2:
    {
        const int size = 5;
        int arr[size] { 1,2,3,4,5 };

        for (int i = 0; i < size; i++)
        {
            cout << arr[size - i - 1] << endl;
        }

    }break;
    case 3:
    {

        const int size = 5;
        int sum = 0;

        int num_1;
        cin >> num_1;

        int num_2;
        cin >> num_2;

        int num_3;
        cin >> num_3;

        int num_4;
        cin >> num_4;

        int num_5;
        cin >> num_5;

        int arr[size]{ num_1, num_2, num_3, num_4, num_5 };

        for (int i = 0; i < size; i++)
        {
            sum = sum + arr[i];
        }

        cout << sum << " Peremetr" << endl;

    }break;
    case 4:
    {
        int min = 0, max = 0;

        const int size = 12;
        int arr[size]{ 100,200,300,400,500, 600, 700, 800, 900, 1000, 1100, 1200 };

        for (int i = 0; i < size; i++)
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
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}