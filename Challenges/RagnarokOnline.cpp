#include <iostream>
#include <vector>

using namespace std;

int main() {
    int partsReceiveds;
    cin >> partsReceiveds;

    vector<int> newParts;

    int x;
    for (int i = 0; i < partsReceiveds; i++) {
        cin >> x;
        newParts.push_back(x);
    }

    int multiplierNumber;
    cin >> multiplierNumber;

    for (int i = 0; i < partsReceiveds; i++) {
        cout << newParts[i] * multiplierNumber << " ";
    }

    return 0;
}
