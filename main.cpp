#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

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

        char text[8];

        ifstream file("text.txt");
        if (!file.is_open())
            cout << "Error!" << endl;
        else {
            file.getline(text, 8);
            cout << text << endl;
            file.close();
        }

        ofstream textFile("text1.txt");
        textFile << text;
        textFile.close();
 
    }break;
    case 2:
    {
        string str;
        string buf;

        ifstream fin("text-2.txt");
        if (!fin.is_open())
            cout << "Error!" << endl;
        else {

            do
            {
                fin >> str;
                cout << str << endl;
                buf += str;
                buf += "\n";
            } while (!fin.eof());

        }

        ofstream textFile("text-2-1.txt");
        textFile << buf;
        textFile.close();

    }break;
    case 3:
    {
        string str;
        string buf;
        int reverse = 0, rem;

        ifstream fin("text-2.txt");
        if (!fin.is_open())
            cout << "Error!" << endl;
        else {

            int n

            while (n > 0) {
                rem = n % 10;
                reverse = reverse * 10 + rem;
                n /= 10;

                do
                {
                    fin >> str;
                    cout << str << endl;
                    buf += str;
                    buf += "\n";
                } while (!fin.eof());
            }

        }

        ofstream textFile("text-2-1.txt");
        textFile << buf;
        textFile.close();
    }break;
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}