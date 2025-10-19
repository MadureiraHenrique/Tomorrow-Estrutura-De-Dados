#include <iostream>
#include <vector>

using namespace std;
struct WarriorStats {
    string name;
    int enemyHealth;
};

int main() {
    vector<WarriorStats> warriorStats;
    WarriorStats newWarriorStats;
    
    int amountOfEnemys;
    cin >> amountOfEnemys; 

    int maxDalek = 0, maxCyberman = 0;

    for (int i = 0; i < amountOfEnemys; i++) {
        cin >> newWarriorStats.name >> newWarriorStats.enemyHealth;
        warriorStats.push_back(newWarriorStats);
        if (warriorStats[i].name == "Dalek") {
            maxDalek++;
        } else if(warriorStats[i].name == "Cyberman") {
            maxCyberman++;
        }
    }
    
    int health;
    cin >> health;

    int daleksDefeated = 0, cybermanDefeated = 0;

    bool ajuda = false;

    for (int i = 0; i < amountOfEnemys; i++) {
        if(warriorStats[i].enemyHealth > health) {
            ajuda = true;
            break;
        }

        health -= warriorStats[i].enemyHealth;

        if (warriorStats[i].name == "Dalek") {
            daleksDefeated++;
        } else if (warriorStats[i].name == "Cyberman") {
            cybermanDefeated++;
        }
    }
    
    if(ajuda) {
        cout << "Consegui derrotar " << daleksDefeated << " daleks e " << cybermanDefeated << " cyberman. Preciso de ajuda!";
    } else {
        cout << "Consegui derrotar todos!";
    }

    return 0;
}
