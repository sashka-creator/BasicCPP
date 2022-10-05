#include <iostream>

using namespace std;

int main()
{
    cout << "\t\t\t#>---------<MENU>---------<#" << endl;
    cout << "\t\t\t|    1 - Task_1            |" << endl;
    cout << "\t\t\t|    2 - Task_2            |" << endl;
    cout << "\t\t\t|    3 - Task_3            |" << endl;
    cout << "\t\t\t|    4 - Task_4            |" << endl;
    cout << "\t\t\t|    5 - Task_5            |" << endl;
    cout << "\t\t\t|    6 - Task_6            |" << endl;
    cout << "\t\t\t|    7 - Task_7            |" << endl;
    cout << "\t\t\t|    8 - Task_8            |" << endl;
    cout << "\t\t\t|    9 - Task_9            |" << endl;
    cout << "\t\t\t|    10 - Task_10          |" << endl;
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
        int start;
        cout << "Start: ";
        cin >> start;

        int end;
        cout << "End: ";
        cin >> end;

        int num;

        do
        {

            system("cls");
            cout << "Enter between " << start << " and " << end << ": ";
            cin >> num;
            if (start <= num && num <= end)
            {
                cout << "Good number";
                break;
            }
            else
            {
                cout << "Incorect number!";
                system("pause");
            }
        } while (true);

    }break;
    case 2:
    {
        int type = 1, much, check = 0;

        do
        {
            if (type == 1 || type == 2 || type == 3 || type == 4)
            {
                system("cls");
                cout << "Choose your product: ";
                cout << "\nSmall cake $5 - 1";
                cout << "\nNormal cake $10 - 2";
                cout << "\nLarge cake $15 - 3";
                cout << "\nChristmas tree $25 - 4";
                cout << "\nDone - 0\n";
                cin >> type;

                if (type == 0)
                {
                    system("cls");
                    cout << "Your check ";
                    cout << check << " $ \n";

                    if (check >= 100)
                    {
                        system("cls");
                        cout << "Nice! You have a discount!\n";
                        cout << "Your check ";
                        cout << check / 2 << " $ \n";

                        break;
                    }

                    break;
                }

                system("cls");
                cout << "How much? \n";
                cin >> much;

                if (type == 1)
                {
                    check = (check + 5) * much;
                }
                else if (type == 2)
                {
                    check = (check + 10) * much;
                }
                else if (type == 3)
                {
                    check = (check + 15) * much;
                }
                else if (type == 4)
                {
                    check = (check + 25) * much;
                }
            }

        } while (true);

    }break;
    case 3:
    {
        int start;
        start = 1;

        int i = start;

        float result = 0;

        int a = 0;

        for (i; i <= 1000; i++)
        {

            result += i;
            a++;
        }

        cout << "Result: " << result / a << endl;

    }break;
    case 4:
    {
        long long p = 1;

        int a;
        cin >> a;

        for (int i = a; i <= 20; i++)
        {
            p *= i;
        }

        cout << p << endl;

    }break;
    case 5:
    {
        int num;
        cout << "Number: ";
        cin >> num;

        int i = 0;

        for (i; i < 10; i++)
        {
            cout << num << " x " << i << " = " << num * i << endl;
        }

    }break;
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}


