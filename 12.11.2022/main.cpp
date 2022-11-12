#include <iostream>
#include <cmath>

using namespace std;

void Random(int arr[]) {
    for (int i = 0; i <= sizeof(*arr); i++)
        arr[i] = 1 + rand() % 15;
}
void Output(int arr[]) {
    for (int i = 0; i <= sizeof(*arr); i++)
        cout << arr[i] << " ";
    cout << endl;
}

void Instead(int arr1[], int arr2[]) {
    for (int i = 0; i <= sizeof(*arr1); i++)

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
        srand((unsigned)time(0));
        int size = 0;
        cout << "Enter a size of arrays: ";
        cin >> size;

        int* arr1 = new int[size];
        Random(arr1);
        Output(arr1);

        int* arr2 = new int[size];
        Random(arr2);
        Output(arr2);

        cout << endl;

        Instead(arr1, arr2);
        Output(arr1);
        Output(arr2);

        delete[] arr1, arr2;
        return 0;

    }break;
    case 2:
    {
        int size;
        cout << "Enter a size of an array: ";
        cin >> size;

        int* arr = new int[size];
        Random(arr);
        Output(arr);
        ReverseOutput(arr);

        delete[] arr;

        return 0;

    }break;
    case 3:
    {
        srand((unsigned)time(0));
        int size;
        cout << "Enter a size of an array: ";
        cin >> size;

        int* arr1 = new int[size];
        Random(arr1);

        int* arr2 = new int[size];
        ReverseArray(arr1, arr2);

        Output(arr1);
        Output(arr2);

        delete[] arr1, arr2;

        return 0;

    }break;
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}