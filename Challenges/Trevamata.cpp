#include <iostream>
#include <vector>

using namespace std;

struct FriendOfBilbo {
    string name;
    double weight;
};

int main() {
    FriendOfBilbo newFriendOfBilbo;
    vector<FriendOfBilbo> friends;
    int numberOfFriends;
    cin >> numberOfFriends;

    for (int i = 0; i < numberOfFriends; i++) {
        cin >> newFriendOfBilbo.name >> newFriendOfBilbo.weight;
        friends.push_back(newFriendOfBilbo);
    }

    int capacity;

    cin >> capacity;

    int count = 0;

    for (int i = 0; i < numberOfFriends; i++) {
        if (friends[i].weight < capacity) {
            count++;
        }
    }
    
    if(count == numberOfFriends) {
        cout << "Vamos todos encontrar a montanha!";
    } else {
        cout << "Vamos virar almoço de aranhas gigantes!" << endl;
        for (int i = 0; i < numberOfFriends; i++) {
            if (friends[i].weight > capacity) {
                cout << friends[i].name << endl;
            }
        }
    }
    
    return 0;
}
