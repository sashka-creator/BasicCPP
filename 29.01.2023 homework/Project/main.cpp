#include <iostream>
#include <fstream>
#include <string>

#include "func.h"

using namespace std;
int main()
{

    cout << "\t\t\t#>---------<MENU>---------<#" << endl;
    cout << "\t\t\t|    1 - Task_1            |" << endl;
    cout << "\t\t\t|    2 - Task_2            |" << endl;
    cout << "\t\t\t|    3 - Task_3            |" << endl;
    cout << "\t\t\t|    4 - Task_4            |" << endl;
    cout << "\t\t\t|    5 - Task_5            |" << endl;
    cout << "\t\t\t#>------------------------<#" << endl;
    cout << "\t\t\t|    Exit - 0              |" << endl;
    cout << "\t\t\t#>------------------------<#" << endl;
    int number;
    cin >> number;
    system("cls");
    switch (number)
    {
    case 1:
    {
        int a = sum(10, 32);
        cout << a << endl;

        return 0;
    }break;
    case 2:
    {
        cout << "size: " << endl;
        int n = 0;
        cin >> n;
        int* mas = new int[n];

        input(mas, n);
        out(mas, n);

        system("pause");
        return 0;
    }break;
    case 3:
    {
        int a = min(10, 32);
        cout << a << endl;

        return 0;
    }break;
    case 4:
    {
        int a = max(10, 32);
        cout << a << endl;

        return 0;
    }break;
    case 5:
    {
        int a = sum(10, 32);
        cout << a << endl;

        return 0;
    }break;
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}