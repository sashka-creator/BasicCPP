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
        const int col = 5;
        const int row = 5;
        long long a;
        int arr[col][row];
        cout << "Number:";
        cin >> a;
        for (size_t i = 0; i < col; i++)
        {
            for (size_t j = 0; j < row; j++)
            {
                arr[col][row] = a, a*=2;
                cout << arr[col][row] << "\t\t";
            }
            cout << endl << endl;
        }
    }break;
    case 2:
    {
        const int col = 5;
        const int row = 5;
        int a;
        int arr[col][row];
        cout << "Number:";
        cin >> a;
        for (size_t i = 0; i < col; i++)
        {
            for (size_t j = 0; j < row; j++)
            {
                arr[col][row] = a, a++;
                cout << arr[col][row] << "\t\t";
            }
            cout << endl << endl;
        }
    }break;
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}


