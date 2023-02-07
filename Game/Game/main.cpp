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
    int randomEnemyChoise = random(1, 3);
    int avada = random(1, 2);
    int hp, damage;
    string title, nameEnemy, textEnemy;
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

    cout << "\t\t\tWelcome to " << title << ". Your HP " << hp << ". Your damage " << damage << endl;
    cout << "\t\t\t" << endl;
    cout << "\t\t\tYour enemy " << nameEnemy << ". HP " << hpEnemy << ". Damage " << damageEnemy << endl;
    cout << "\t\t\t#>-----------------------------------------<#" << endl;
    cout << "\t\t\t|                                           |" << endl;
    cout << "\t\t\t|              1 - Start to play            |" << endl;
    cout << "\t\t\t|              2 - Exit                     |" << endl;
    cout << "\t\t\t|                                           |" << endl;
    cout << "\t\t\t#>-----------------------------------------<#" << endl;
    int numberMiddle;
    cin >> numberMiddle;


    if (numberMiddle == 1) {

        while (hp >= 0 && hpEnemy >= 0) {

            cout << "\t\t\tBe careful, because enemy have next move" << endl;
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
            cout << "\t\t\t         Your hp " << hp  << endl;
            cout << "\t\t\t         Enemy hp " << hpEnemy << endl;
            cout << "\t\t\t                                             " << endl;
            cout << "\t\t\t#>-----------------------------------------<#" << endl;
            int numberEnd;
            cin >> numberEnd;

            if (numberEnd == 1) {

                hpEnemy -= 30;
                textEnemy = "Enemy: 'Ha ha ha! It's to easy. Take this!'";
                cout << textEnemy << endl;

            }
            else if (numberEnd == 2) {

                hp += 30;
                textEnemy = "Huh!? You so strange!";
                cout << textEnemy << endl;

            }
            else if (numberEnd == 3) {

                if (avada == 1) {
                    hpEnemy -= 180;
                    cout << "Oh you son of a bitch, you won" << endl;
                }
                else {
                    hp -= 180;
                    cout << "It was so ezz, I won" << endl;
                }

            }

            if (randomEnemyChoise == 1 & hpEnemy > 0) {
                hpEnemy -= 30;
                cout << "Do you like it?" << endl;
            }
            else if (randomEnemyChoise == 2) {

                hpEnemy += 30;

            }
        }

        if (hp <= 0) {

            cout << "Congratulations you lose!" << endl;

        }
        else if (hpEnemy <= 0) {
            cout << "Congratulations you won!" << endl;
        }


    }
    else if (numberMiddle == 2) {

        cout << "\t\t\t#>-----------------------------------------<#" << endl;
        cout << "\t\t\t|                                           |" << endl;
        cout << "\t\t\t|                  The End                  |" << endl;
        cout << "\t\t\t|                                           |" << endl;
        cout << "\t\t\t#>-----------------------------------------<#" << endl;

    }
}