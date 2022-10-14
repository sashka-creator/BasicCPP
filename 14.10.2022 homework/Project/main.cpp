#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "\t\t\t#>---------<MENU>---------<#" << endl;
    cout << "\t\t\t|    1 - Task_1            |" << endl;
    cout << "\t\t\t|    2 - Task_2            |" << endl;
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

        int a;
        cout << "Choose type" << endl;
        cin >> a;

        if (a == 1) 
        {

            for (int i = 0; i < 10; i++)
            {
                for (int j = 10; j > i; j--)
                {
                    cout << "*";
                }
                cout << endl;

                for (int k = -1; k < i; k++)
                {
                    cout << " ";
                }
            }

        }
        else if (a == 2) 
        {

            for (int i = 0; i <= 10; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }

        }
        else if (a == 3)
        {

            for (int i = 0; i < 10; i++)
            {
                for (int j = 10; j > i + 1; j--)
                {
                    cout << " ";
                }
                for (int j = 0; j <= i; ++j)
                {
                    cout << "*";
                }
                cout << endl;
            }

        }
        else if (a == 4)
        {

            for (int i = 0; i < 10; i++) 
            {
                for (int j = 10; j > i; j--)
                {
                    cout << "*";
                }
                cout << endl;
            }

        }
        else if (a == 5)
        {

            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    cout << (
                        (j >= i && j < 10 - i) ||
                        (j <= i && j >= 10 - i - 1)
                        ? "*" : " ");
                }

                cout << endl;
            }

        }
        else if (a == 6)
        {

            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    cout << (
                        (j > i && j < 10 - i - 1) ||
                        (j < i&& j >= 10 - i)
                        ? " " : "*");
                }

                cout << endl;
            }

        }
        else
        {
            cout << "Type normal number" << endl;
        }

    }break;
    case 2:
    {

        int a, cp, n = 0, sum = 0, c = 0;

        cout << "Number:";
        cin >> a;
        cp = a;

        while (a)
        {
            if (a % 10 == 0)
                c++;
            a /= 10;
        }
        cout << "Zeros " << c;


        for (n = 0; cp > 0; n++)
        {
            sum += cp % 10;
            cp /= 10;
        }
        cout << "\nNumbers = " << n << " \nSum = " << sum << "\nMiddle arifme = " << (double)sum / n << "\n";

    }break;
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}


