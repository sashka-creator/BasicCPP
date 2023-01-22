#include <iostream>
#include <cmath>
#include <fstream>

#define max(a, b) (a >= b) ? (a) : (b)
#define min(a, b) (a <= b) ? (a) : (b)
#define kva(a) a * a
#define para(a, b) (a == b) ? (cout << "Para" << endl;) : (cout << "Ne para" << endl;)
#define nepara(a, b) (a != b) ? (cout << "Ne para" << endl;) : (cout << "Para" << endl;)

#define println(value) std::cout << value << std::endl
#define endLine std::cout << std::endl

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
        int x = max(2, 8);
        println(x);
        endLine;
        return 0;

    }break;
    case 2:
    {
        int x = min(2, 8);
        println(x);
        endLine;
        return 0;

    }break;
    case 3:
    {
        int x = kva(6);
        println(x);
        endLine;
        return 0;

    }break;
    case 4:
    {
        int x = para(2, 2);
        println(x);
        endLine;
        return 0;

    }break;
    case 5:
    {
        int x = kva(6);
        println(x);
        endLine;
        return 0;

    }break;
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}