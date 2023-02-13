#include <iostream>
#include <cmath>
#include <random>

using namespace std;

std::random_device rd;
std::mt19937 gen(rd());

int random(int low, int high)
{
    std::uniform_int_distribution<> dist(low, high);
    return dist(gen);
}

int main()
{
    int randomEnemy = random(1, 4);
    int randomEnemyChoise =  random(1, 2);
    int avada = random(1, 2);
    int hp, damage;
    string title, nameEnemy, textEnemy, map, titleChoose, titleChooseEnemy;
    int hpEnemy = 10, damageEnemy;


    cout << "\t\t\t#>---------<Hogwarts Student Wars>---------<#" << endl;
    cout << "\t\t\t|                                           |" << endl;
    cout << "\t\t\t|              1 - Gryffindor               |" << endl;
    cout << "\t\t\t|              2 - Slytherin                |" << endl;
    cout << "\t\t\t|              3 - Hufflepuff               |" << endl;
    cout << "\t\t\t|              4 - Ravenclaw                |" << endl;
    cout << "\t\t\t|                                           |" << endl;
    cout << "\t\t\t#>-----------------------------------------<#" << endl;
    int numberStart;
    cin >> numberStart;

    /* Character*/

    if (numberStart == 1) {

        hp = 125;
        damage = 10;
        title = "Gryffindor";

    }
    else if (numberStart == 2) {

        hp = 80;
        damage = 20;
        title = "Slytherin";

    }
    else if (numberStart == 3) {

        hp = 150;
        damage = 5;
        title = "Hufflepuff";

    }
    else if (numberStart == 4) {

        hp = 100;
        damage = 15;
        title = "Ravenclaw";

    }

    /*Enemy*/

    if (randomEnemy == 1) {
        nameEnemy = "Gryffindor";
        hpEnemy = 125;
        damageEnemy = 10;
    }
    else if (randomEnemy == 2) {

        nameEnemy = "Slytherin";
        hpEnemy = 80;
        damageEnemy = 20;

    }
    else if (randomEnemy == 3) {

        nameEnemy = "Hufflepuff";
        hpEnemy = 150;
        damageEnemy = 5;

    }
    else if (randomEnemy == 4) {

        nameEnemy = "Ravenclaw";
        hpEnemy = 100;
        damageEnemy = 15;

    }

    std::system("CLS");
    cout << "\t\t\tWelcome to " << title << ". Your HP " << hp << ". Your damage " << damage << endl;
    cout << "\t\t\t" << endl;
    cout << "\t\t\tYour enemy " << nameEnemy << ". HP " << hpEnemy << ". Damage " << damageEnemy << endl;
    cout << "\t\t\t" << endl;
    cout << "\t\t\t#>---------------<Choose map>--------------<#" << endl;
    cout << "\t\t\t|                                           |" << endl;
    cout << "\t\t\t|              1 - Mirage                   |" << endl;
    cout << "\t\t\t|              2 - Hogwarts                 |" << endl;
    cout << "\t\t\t|              3 - Elf Bank                 |" << endl;
    cout << "\t\t\t|                                           |" << endl;
    cout << "\t\t\t#>-----------------------------------------<#" << endl;
    int numberMap;
    cin >> numberMap;

    if (numberMap == 1) {

        map = "Mirage";
    }
    else if (numberMap == 2) {

        map = "Hogwarts";
    }
    else if (numberMap == 3) {

        map = "Elf Bank";
    }

    while (hp >= 0 && hpEnemy >= 0) {

        std::system("CLS");
        cout << "\t\t\t" << map << "! Good choise!" << endl;
        cout << "\t\t\t" << titleChoose << titleChooseEnemy << endl;
        cout << "\t\t\tChoose your move!" << endl;
        cout << "\t\t\t" << endl;
        cout << "\t\t\t#>-----------------------------------------<#" << endl;
        cout << "\t\t\t|                                           |" << endl;
        cout << "\t\t\t|          1 - Expecto Patronum             |" << endl;
        cout << "\t\t\t|          - 30 hp + default damage         |" << endl;
        cout << "\t\t\t|                                           |" << endl;
        cout << "\t\t\t|          2 - Imperio                      |" << endl;
        cout << "\t\t\t|          + 30 hp to your character        |" << endl;
        cout << "\t\t\t|                                           |" << endl;
        cout << "\t\t\t|          3 - Avada Kedavra                |" << endl;
        cout << "\t\t\t|          - 100% hp enemy or yours         |" << endl;
        cout << "\t\t\t|                                           |" << endl;
        cout << "\t\t\t#>-----------------------------------------<#" << endl;
        cout << "\t\t\t                                             " << endl;
        cout << "\t\t\t           Your hp " << hp << endl;
        cout << "\t\t\t           Enemy hp " << hpEnemy << endl;
        cout << "\t\t\t                                             " << endl;
        cout << "\t\t\t#>-----------------------------------------<#" << endl;
        int numberEnd;
        cin >> numberEnd;

        if (numberEnd == 1 && randomEnemyChoise == 1) {

            hpEnemy -= 30;
            hp -= 30;
            titleChoose = "You picked Expecto Patronum.";
            titleChooseEnemy = "Your enemy picked Expecto Patronum.";

        }
        else if (numberEnd == 1 && randomEnemyChoise == 2) {

            hpEnemy += 30;
            hp -= 30;
            titleChoose = "You picked Expecto Patronum.";
            titleChooseEnemy = "Your enemy picked Imperio.";

        }
        else if (numberEnd == 2 && randomEnemyChoise == 1) {

            hpEnemy -= 30;
            hp += 30;
            titleChoose = "You picked Imperio.";
            titleChooseEnemy = "Your enemy Expecto Patronum.";

        }
        else if (numberEnd == 2 && randomEnemyChoise == 2) {

            hpEnemy += 30;
            hp += 30;
            titleChoose = "You picked Imperio.";
            titleChooseEnemy = "Your enemy picked Imperio.";

        }
        else if (numberEnd == 3) {

            if (avada == 1) {
                hpEnemy -= 1000;
                cout << "Oh you son of a bitch, you won" << endl;
            }
            else {
                hp -= 1000;
                cout << "It was so ezz, I won" << endl;
            }

        }

    }


    if (hp <= 0) {

        std::system("CLS");

        cout << "Nice try! Maybe later you will win" << endl;

        cout << "\t\t\t#>-----------------------------------------<#" << endl;
        cout << "\t\t\t|                                           |" << endl;
        cout << "\t\t\t|                  The End                  |" << endl;
        cout << "\t\t\t|                                           |" << endl;
        cout << "\t\t\t#>-----------------------------------------<#" << endl;

    }
    else if (hpEnemy <= 0) {

        std::system("CLS");

        cout << "Good job! You won!" << endl;
        cout << "\t\t\t#>-----------------------------------------<#" << endl;
        cout << "\t\t\t|                                           |" << endl;
        cout << "\t\t\t|                  The End                  |" << endl;
        cout << "\t\t\t|                                           |" << endl;
        cout << "\t\t\t#>-----------------------------------------<#" << endl;

    }

}
