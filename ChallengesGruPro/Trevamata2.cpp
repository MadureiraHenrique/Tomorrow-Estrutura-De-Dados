#include <iostream>
#include <vector>

using namespace std;

int main() {
    pair<string, int> newFriendOfBilbo;
    vector <pair<string, int>> friendsOfBilbo;

    int quantityOfFriends;
    cin >> quantityOfFriends;

    for (int i = 0; i < quantityOfFriends; i++) {
        cin >> newFriendOfBilbo.first >> newFriendOfBilbo.second;
        friendsOfBilbo.push_back(newFriendOfBilbo);
    }

    int weight;
    cin >> weight;

    bool goToMountain = true;
    vector<int> friendThatNoGoToMountain;

    for (int i = 0; i < quantityOfFriends; i++) {
        if (friendsOfBilbo[i].second > weight) {
            friendThatNoGoToMountain.push_back(i);
            goToMountain = false;
        }
    }
    
    if (goToMountain) {
        cout << "Vamos todos encontrar a montanha!" << endl;
    } else {
        cout << "Vamos virar almoço de aranhas gigantes!" << endl;
        for (int i = 0; i < friendThatNoGoToMountain.size(); i++) {
            cout << friendsOfBilbo[friendThatNoGoToMountain[i]].first << endl;
        }
    }

    return 0;
}
