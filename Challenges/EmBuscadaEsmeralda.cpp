#include <iostream>
#include <vector>

using namespace std;

int main() {
    int amountOfEmerald;
    cin >> amountOfEmerald;

    vector<int> emeralds;

    for (int i = 0; i < amountOfEmerald; i++) {
        int newEmerald;
        cin >> newEmerald;
        emeralds.push_back(newEmerald);
    }

    int findEmerald;
    cin >> findEmerald;

    bool encountered = false;

    for (int i = 0; i < amountOfEmerald; i++) {
        if(findEmerald == emeralds[i]) {
            encountered = true;
            break;
        }
    }

    if(encountered) {
        cout << findEmerald << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
