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

    int dalek = 0, cyberman = 0;

    for (int i = 0; i < amountOfEnemys; i++) {
        if (warriorStats[i].name == "Dalek" && (health > warriorStats[i].enemyHealth)) {
            dalek++;
            health = health - warriorStats[i].enemyHealth;
        } else if (warriorStats[i].name == "Cyberman" && (health > warriorStats[i].enemyHealth)) {
            cyberman++;
            health = health - warriorStats[i].enemyHealth;
        }
    }
    
    if(health >= 0 && (dalek == maxDalek && cyberman == maxCyberman)) {
        cout << "Consegui derrotar todos!";
    } else {
        cout << "Consegui derrotar " << dalek << " daleks e " << cyberman << " cyberman." << endl;
        cout << "Preciso de ajuda!" << endl;
    }

    return 0;
}
