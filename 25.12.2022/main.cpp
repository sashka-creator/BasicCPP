#include <iostream>
#include <cmath>
using namespace std;

struct RozetkaHeadphones {
    char HyperX;
    char Razer;
    char Logitech;
    char Apple;
    char Sony;
    char Samsung;
    char Corsair;
};

struct RozetkaKeyboards {
    char HyperX;
    char Razer;
    char Logitech;
    char Apple;
    char Sony;
    char Samsung;
    char Corsair;
};

struct RozetkaMouses {
    char HyperX;
    char Razer;
    char Logitech;
    char Apple;
    char Sony;
    char Samsung;
    char Corsair;
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
        RozetkaHeadphones Headphones;
        Headphones.HyperX = 'Cloud Headphone';
        Headphones.Razer = 'Razer Headphone';
        Headphones.Logitech = 'G435';
        Headphones.Apple = 'AirPods';
        Headphones.Sony = 'Sony Headphone';
        Headphones.Samsung = 'Samsung Headphone';
        Headphones.Corsair = 'Corsair Headphone';

        cout << "HyperX: " << Headphones.HyperX << " Razer: " << Headphones.Razer << " Logitech: " << Headphones.Logitech << " Apple: " << Headphones.Apple << " Sony: " << Headphones.Sony << " Samsung: " << Headphones.Samsung << " Sony: " << Headphones.Sony << " Corsair: " << Headphones.Corsair << endl;
    }break;
    case 2:
    {
        RozetkaMouses Mouses;
        Mouses.HyperX = 'Cloud Mouse';
        Mouses.Razer = 'Razer Mouse';
        Mouses.Logitech = 'Logitech Mouse';
        Mouses.Apple = 'Apple Mouse';
        Mouses.Sony = 'Sony Mouse';
        Mouses.Samsung = 'Samsung Mouse';
        Mouses.Corsair = 'Corsair Mouse';

        cout << "HyperX: " << Mouses.HyperX << " Razer: " << Mouses.Razer << " Logitech: " << Mouses.Logitech << " Apple: " << Mouses.Apple << " Sony: " << Mouses.Sony << " Samsung: " << Mouses.Samsung << " Sony: " << Mouses.Sony << " Corsair: " << Mouses.Corsair << endl;
    }break;
    case 3:
    {
        RozetkaKeyboards Keyboards;
        Keyboards.HyperX = 'Cloud Keyboard';
        Keyboards.Razer = 'Razer Keyboard';
        Keyboards.Logitech = 'Logitech Keyboard';
        Keyboards.Apple = 'Apple Keyboard';
        Keyboards.Sony = 'Sony Headphone';
        Keyboards.Samsung = 'Samsung Keyboard';
        Keyboards.Corsair = 'Corsair Keyboard';

        cout << "HyperX: " << Keyboards.HyperX << " Razer: " << Keyboards.Razer << " Logitech: " << Keyboards.Logitech << " Apple: " << Keyboards.Apple << " Sony: " << Keyboards.Sony << " Samsung: " << Keyboards.Samsung << " Sony: " << Keyboards.Sony << " Corsair: " << Keyboards.Corsair << endl;
    }break;
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}