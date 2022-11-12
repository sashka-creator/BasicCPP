#include <iostream>
#include <cmath>

using namespace std;

int MinMax(int x, int y) {
    return(x > y) ? x : y;
}

char PlusMinus(int num) {
    return(num >= 0) ? '+' : '-';
}

void Replace(int* num1, int* num2) {
    int num3 = *num1;
    *num1 = *num2;
    *num2 = num3;
}

int SumOfArr(int arr[]) {
    int sum = 0;
    for (int i = 0; i <= sizeof(*arr); i++)
        sum += arr[i];

    return sum;
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
        int* FirstNum = new int{};
        int* SecondNum = new int{};

        cout << "Enter a number: ";
        cin >> *FirstNum;
        cout << "Enter a number: ";
        cin >> *SecondNum;

        cout << MinMax(*FirstNum, *SecondNum);
        delete FirstNum;
        delete SecondNum;

        return 0;

    }break;
    case 2:
    {
        int* num = new int{};
        cout << "Enter: ";
        cin >> *num;
        cout << PlusMinus(*num);
        delete num;
        return 0;

    }break;
    case 3:
    {
        int* num1 = new int{};
        cout << "Enter: ";
        cin >> *num1;
        int* num2 = new int{};
        cout << "Enter: ";
        cin >> *num2;

        Replace(num1, num2);

        cout << "num1 = " << *num1 << "\nnum2 = " << *num2 << endl;
        delete num1, num2;
        return 0;

    }break;
    case 4:
    {
        srand((unsigned)time(0));
        int size;
        cout << "Enter a size of an array: ";
        cin >> size;

        int* arr = new int[size];

        for (int i = 0; i < size; i++)
            arr[i] = 1 + rand() % 15;

        cout << SumOfArr(arr);

        delete[] arr;
        return 0;

    }break;
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}