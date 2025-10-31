#include <iostream>
#include <vector>

using namespace std;

// with struct
struct Coins {
    string color;
    int value;
};

int main() {
    Coins coins;
    vector<Coins> newCoins;
    int amountOfCoins;
    cin >> amountOfCoins;

    for (int i = 0; i < amountOfCoins; i++) {
        cin >> coins.color >> coins.value;
        newCoins.push_back(coins);
    }

    int minimalCoins, sum = 0;
    cin >> minimalCoins;

    for (int i = 0; i < amountOfCoins; i++) {
        if(newCoins[i].value >= minimalCoins) {
            cout << newCoins[i].color << " " << newCoins[i].value << endl;
            sum += newCoins[i].value;
        }
    }

    cout << sum << endl;

    return 0;
}

// whitout struct

// int main() {
//     int amountOfCoins;
//     cin >> amountOfCoins;
//     pair<string, int> datasOfCoin;
//     vector<pair<string, int>> newCoins;

//     for (int i = 0; i < amountOfCoins; i++) {
//         cin >> datasOfCoin.first >> datasOfCoin.second;
//         newCoins.push_back(datasOfCoin);
//     }

//     int valueExpected, sum = 0;
//     cin >> valueExpected;
    
//     for (int i = 0; i < amountOfCoins; i++) {
//         if (newCoins[i].second >= valueExpected) {
//             cout << newCoins[i].first << " " << newCoins[i].second << endl;
//             sum += newCoins[i].second;
//         }
//     }

//     cout << sum << endl;

//     return 0;
// }
