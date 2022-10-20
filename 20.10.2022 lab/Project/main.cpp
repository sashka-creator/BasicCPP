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
        const int x = 6, y = 5;
        int array[x][y] = {
            {3,5,6,7},  // 0 row
            {12,1,1,1},  // 1 row
            {0,7,12,1},  // 2 row
        };

        for (int i = 0; i < y; i++) {
            int row = i;
            for (int j = 0; j < x; j++) {
                int col = j;
                if (row == 3) {
                    cout << "\t" << "-";
                }
                else if (col == 4) {
                    cout << "\t" << "|";
                }
                else if (col == 5) {
                    cout << "\t" << array[row][0] + array[row][1] + array[row][2] + array[row][3];
                }
                else if (row == 4 && col < 5) {
                    array[row][col] = array[0][col] + array[1][col] + array[2][col];
                    cout << "\t" << array[row][col];
                }
                else {
                    cout << "\t" << array[row][col];
                }       
            }
            cout << endl;
        }
    }break;
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}


