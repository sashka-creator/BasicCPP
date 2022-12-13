#include <iostream>
#include <cmath>
using namespace std;

int mystrlen(const char* str)
{
    int size = 0;
    for (size_t i = 0; str[i] != '\0'; i++)
    {
        size++;
    }
    return size;
}

char* mystrcpy(char* str1, const char* str2)
{
    int size = mystrlen(str2);
    str1 = new char[size + 1];
    for (size_t i = 0; i < size; i++)
    {
        str1[i] = str2[i];
    }
    str1[size] = '\0';
    return str1;
}

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
        char str[] = "name";
        cout << "SIZE = " << mystrlen(str) << endl;
        return 0;

    }break;
    case 2:
    {
        char* str1 = new char [7] {"name"};
        const char* str2 = "surname";
        cout << "Str 1 = " << str1 << endl;
        cout << "Str 2 = " << str2 << endl;
        return 0;

    }break;
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}