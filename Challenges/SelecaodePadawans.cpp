#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> strength;

    int amountOfYoungs;
    cin >> amountOfYoungs;

    int newStrength;
    for (int i = 0; i < amountOfYoungs; i++) {
        cin >> newStrength;
        strength.push_back(newStrength);
    }

    double powerOfMaster;
    cin >> powerOfMaster;

    for (int i = 0; i < amountOfYoungs; i++) {
        if(powerOfMaster / 2 <= strength[i]) {
            cout << i << " ";
        }
    }

    return 0;
}
