#include <iostream>
#include <vector>

using namespace std;

int main() {
    int missionsAccepted;
    cin >> missionsAccepted;

    int cache;
    vector<int> missionXP;
    for (int i = 0; i < missionsAccepted; i++) {
        cin >> cache;
        missionXP.push_back(cache);
    }
    
    vector<int> bonusXP;
    for (int i = 0; i < missionsAccepted; i++) {
        cin >> cache;
        bonusXP.push_back(cache);
    }

    pair<int, int> values;
    cin >> values.first >> values.second;

    double sum = 0;

    for (int i = 0; i < missionsAccepted; i++) {
        sum += missionXP[i] * (bonusXP[i] + values.second);
    }

    if(sum >= values.first) {
        cout << "Upou de Nivel!" << endl;
    } else {
        cout << "Nao foi dessa vez!" << endl;
    }

    return 0;
}   
