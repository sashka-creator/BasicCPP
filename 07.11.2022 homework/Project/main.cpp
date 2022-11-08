#include <iostream>
#include <ctime>
using namespace std;

int big(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	if (a > b)
	{
		return big(b, a % b);
	}
	else
	{
		return big(a, b % a);
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
        int a, b;
        cout << "Number 1 " << endl;
        cin >> a;
        cout << "Number 2 " << endl;
        cin >> b;
        cout << "The biggest one " << big(b, a % b) << endl;
        return 0;
    }
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}