#include <iostream>
#include <cmath>
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
        char file__1__path[] = "file__1.txt";
        char file__1__text[256] = {};
        FILE* file__1 = fopen(file__1_path, "r");

        char file__2__path[] = "file__2.txt";
        char file__2__text[256] = {};
        FILE* file__2 = fopen(file__2__path, "r");

        while (fgets(file__1__text, 256, file__1)) {
            fgets(file__2__text, 256, file__2);

            for (size_t i = 0; i < strlen(file__2__text) || i < strlen(file__1__text); i++) {
                if (file__1__text[i] != file__2__text[i]) {
                    std::cout << "file 1: " << file__1__text << std::endl;
                    std::cout << "file 2: " << file__2__text << std::endl;
                    break;
                }
            }
        }

        fclose(file__1);
        fclose(file__2);
        return 0;
    }break;
    case 2:
    {
        char file__path[] = "file.txt";
        char file__text[256] = {};
        FILE* file = fopen(file__path, "r");

        size_t letters = 0;
        size_t lines = 0;
        size_t letters_vowel = 0;
        size_t letters_consonant = 0;
        size_t numbers = 0;

        while (fgets(file__text, 256, file)) {
            lines++;
            for (size_t i = 0; i < strlen(file__text); i++) {
                if (isdigit(file__text[i]))
                    numbers++;

                if (tolower(file__text[i]) == 'a' || tolower(file__text[i]) == 'e' || tolower(file__text[i]) == 'i' ||
                    tolower(file__text[i]) == 'o' || tolower(file__text[i]) == 'u')
                    letters_vowel++;
                if ((tolower(file__text[i]) != 'a' || tolower(file__text[i]) != 'e' || tolower(file__text[i]) != 'i' ||
                    tolower(file__text[i]) != 'o' || tolower(file__text[i]) != 'u') && isalpha(file__text[i]))
                    letters_consonant++;
            }
            letters += strlen(file__text);
        }

        std::cout << "Letters: " << letters - lines + 1 << std::endl; std::cout << "Lines: " << lines << std::endl; std::cout << "Vowel letters: " << letters_vowel << std::endl; std::cout << "Consonant letters: " << letters_consonant << std::endl; std::cout << "Numbers: " << numbers << std::endl;

        return 0;
    }break;
    case 3:
    {
  
    }break;
    default:
    {
        cout << "Else" << endl;
    }break;
    }
}