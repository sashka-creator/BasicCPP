#include <iostream>
#include <fstream>
#include <string>
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
    int number;
    cin >> number;
    system("cls");
    switch (number)
    {
    case 1:
    {
        string line = "", res = "";

        ifstream Read("file-1.txt");

        if (Read.is_open())
        {
            while (std::getline(Read, line))
            {
                if (line != "\0")
                {
                    res = line;
                }
            }
            std::cout << res << std::endl;
            Read.close();
        }

        std::ofstream Write("file-2.txt");
        if (Write.is_open())
        {
            Write << res << std::endl;
            Write.close();
        }

        return 0;
    }break;
    case 2:
    {
        string line = "", res = "";
        size_t length = 0;
        ifstream Read("file-1.txt");

        if (Read.is_open())
        {
            while (getline(Read, line))
            {
                if (line.length() > length)
                {
                    res = line;
                    length = line.length();
                }
            }
            Read.close();
        }
        std::cout << res << " : " << length << std::endl;

        return 0;
    }break;
    case 3:
    {
        string user_line = "", file_line = "";
        ifstream file("file-1.txt");
        size_t count = 0;

        cout << "word: ";
        getline(std::cin, user_line);

        if (file.is_open())
        {
            while (std::getline(file, file_line))
            {
                for (size_t i = 0, j = 0; i < file_line.length(); ++i)
                {
                    if (file_line[i] == user_line[j])
                    {
                        j++;
                        if (j == user_line.length())
                        {
                            count++;
                        }
                    }
                    if (j == user_line.length())
                    {
                        j = 0;
                    }
                }
            }
            file.close();
        }
        std::cout << user_line << " : " << count << std::endl;
        return 0;

    }break;
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}