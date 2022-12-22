#include <iostream>
#include <cmath>
using namespace std;

struct washingMachine {
    char firm;
    char color;
    double lenght;
    int power;
    int temperature;
};

struct iron {
    char firm;
    char color;
    double lenght;
    int power;
    int minTemperature;
    int maxTemperature;
};

struct boiler {
    char firm;
    char color;
    double lenght;
    int power;
    int minTemperature;
    int maxTemperature;
};

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
            
        washingMachine first;
        first.firm = 'Philips';
        first.color = 'White';
        first.lenght = 35;
        first.power = 125;
        first.temperature = 50;

        cout << "Firm: " << first.firm << " Color: " << first.color << " Lenght: " << first.lenght << " Power: " << first.power << " Temperature: " << first.temperature << endl;


    }break;
    case 2:
    {
        iron first;
        first.firm = 'Philips';
        first.color = 'White';
        first.lenght = 35;
        first.power = 125;
        first.minTemperature = 10;
        first.maxTemperature = 100;

        cout << "Firm: " << first.firm << " Color: " << first.color << " Lenght: " << first.lenght << " Power: " << first.power << " Min temperature: " << first.minTemperature << " Max temperature: " << first.maxTemperature << endl;
        < endl;
    }break;
    case 3:
    {
        boiler first;
        first.firm = 'Philips';
        first.color = 'White';
        first.lenght = 35;
        first.power = 125;
        first.minTemperature = 10;
        first.maxTemperature = 100;

        cout << "Firm: " << first.firm << " Color: " << first.color << " Lenght: " << first.lenght << " Power: " << first.power << " Min temperature: " << first.minTemperature << " Max temperature: " << first.maxTemperature << endl;
        < endl;
    }break;
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}