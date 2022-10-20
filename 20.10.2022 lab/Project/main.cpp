#include <iostream>
#include <cmath>

using namespace std;

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

        const int col = 5;
        const int row = 5;
        int arr_2[col][row];
        double sum;
        int a;

        for (size_t i = 0; i < col; i++)
        {
            for (size_t j = 0; j < row; j++)
            {
                arr_2[i][j] = rand() % 10;
                cout << arr_2[i][j] << "\t";
            }
            cout << endl << endl;
        }

        sum = 0;
        for (size_t i = 0; i < col; i++)
        {

            for (size_t j = 0; j < row; j++)
            {
                sum += arr_2[i][j];
            }
        }
        cout << sum << endl;

        cout << sum / (col * row) << endl;

        int min, max;
        min = max = arr_2[0][0];

        for (size_t i = 0; i < col; i++)
        {
            for (size_t j = 0; j < row; j++)
            {
                if (min > arr_2[i][j])
                {
                    min = arr_2[i][j];
                }
                if (max < arr_2[i][j])
                {
                    max = arr_2[i][j];
                }
            }
        }

        cout << min << " " << max << endl;
    }break;
    case 2:
    {
        // Я не знаю як зробити цю задачу
    }break;
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}


