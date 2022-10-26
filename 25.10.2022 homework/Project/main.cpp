#include <iostream>
#include <cmath>

using namespace std;

int root(int a, int b) {

    return(pow(a, b));

}

double add(double start, double end) {

    double result = 0;

    for (int i = start; i <= end; i++)
    {
        result += i;
    }

    return result;

}

void card(double num) {

    double result = 0;

    if (num == 1) 
    {
        cout << "Your card is red!" << endl;
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
          int sum;

          sum = root(5, 5);

          cout << "Result " << sum << endl;

          return 0;
    }break;
    case 2:
    {
        double sum = add(5, 10);

        cout << "Result " << sum << endl;

        return 0;
    }break;
    case 3:
    {
        int sum;

        sum = root(5, 5);

        cout << "Result " << sum << endl;

        return 0;
    }break;
    case 4:
    {
        double sum = card(5);

        cout << "Result " << sum << endl;

        return 0;
    }break;
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}