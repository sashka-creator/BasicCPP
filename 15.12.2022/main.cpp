#include <iostream>
#include <cmath>
using namespace std;


char* NumberToString(int number, int numberTwo)
{
    int size = NumberToString(numberTwo);
    number = new char[size + 1];
    for (size_t i = 0; i < size; i++)
    {
        number[i] = numberTwo[i];
    }
    number[size] = '\0';
    return number;
}

char* Uppercase(char* str1)
{
    char arr[] = "Engineering Discipline.";

    cout << "Original String:\n" << arr << endl;
    cout << "String in UPPERCASE:\n";
    for (int x = 0; x < strlen(arr); x++)
        putchar(toupper(arr[x]));

    return 0;
}

char* mystrrev(char* str)
{
    char arr[] = "Engineering Discipline.";

    cout << "Original String:\n" << arr << endl;
    cout << "String in UPPERCASE:\n";
    for (int x = 0; x < strlen(arr); x++)
        putchar(toupper(arr[x]));

    return 0;
}

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
        char str[] = "name";
        cout << "SIZE = " << NumberToString(str) << endl;
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
    case 3:
    {
        char str[] = "name";
        cout << "SIZE = " << mystrrev(str) << endl;
        return 0;

    }break;
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}