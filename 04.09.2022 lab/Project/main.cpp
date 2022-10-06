#include <iostream>

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
        int level;

        cout << "Lets check ur level";
        cout << "\n1. First level";
        cout << "\n2. Second level";
        cout << "\n3. Third level\n";
        cin >> level;

        if (level == 1)
        {
            system("cls");
            int taskF, taskS, taskT;

            cout << "2 + 2\n";
            cin >> taskF;

            system("cls");
            cout << "7 + 5\n";
            cin >> taskS;

            system("cls");
            cout << "4 + 20\n";
            cin >> taskT;

            if (taskF == 4 && taskS == 13 && taskT == 24)
            {
                cout << "Great! Level 1 = 3/3";
                break;
            }
            else if (taskF == 4 && taskS == 13 || taskS == 13 && taskT == 24 || taskT == 24 && taskF == 4)
            {
                cout << "Good! Level 1 = 3/2";
                break;
            }
            else
            {
                cout << "Amazing! Level 1 = bad";
            }
        }
        if (level == 2)
        {
            system("cls");
            int taskF, taskS, taskT;

            cout << "4 * 4\n";
            cin >> taskF;

            system("cls");
            cout << "12 % 3\n";
            cin >> taskS;

            system("cls");
            cout << "20 * 2\n";
            cin >> taskT;

            if (taskF == 16 && taskS == 4 && taskT == 40)
            {
                cout << "Great! Level 2 = 3/3";
                break;
            }
            else if (taskF == 16 && taskS == 4 || taskS == 4 && taskT == 40 || taskT == 40 && taskF == 16)
            {
                cout << "Good! Level 2 = 3/2";
                break;
            }
            else
            {
                cout << "Amazing! Level 2 = bad";
            }
        }
        if (level == 3)
        {
            system("cls");
            int taskF, taskS, taskT;

            cout << "-10 + 20\n";
            cin >> taskF;

            system("cls");
            cout << "21 % 3\n";
            cin >> taskS;

            system("cls");
            cout << "-20 - -15\n";
            cin >> taskT;

            if (taskF == 10 && taskS == 7 && taskT == -35)
            {
                cout << "Great! Level 3 = 3/3";
                break;
            }
            else if (taskF == 10 && taskS == 7 || taskS == 7 && taskT == -35 || taskT == -35 && taskF == 7)
            {
                cout << "Good! Level 3 = 3/2";
                break;
            }
            else
            {
                cout << "Amazing! Level 3 = bad";
            }
        }

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


