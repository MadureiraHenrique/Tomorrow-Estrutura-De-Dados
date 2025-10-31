#include <iostream>
#include <stack>

using namespace std;

int main () {
    pair<int, int> trainers;
    stack<int> ash;
    stack<int> gary;

    int quantityOfTrainers;
    cin >> quantityOfTrainers;

    for (int i = 0; i < quantityOfTrainers; i++) {
        cin >> trainers.first >> trainers.second;
        ash.push(trainers.first);
        gary.push(trainers.second);
    }

    int pokemonsDefeateds = 0;

    while (!(ash.empty() || gary.empty())) {
        if (ash.top() > gary.top()) {
            ash.top() = ash.top() - gary.top();
            gary.pop();
        } else if (gary.top() > ash.top()) {
            pokemonsDefeateds++;
            gary.top() = gary.top() - ash.top();
            ash.pop();
        } else if (gary.top() == ash.top()) {
            pokemonsDefeateds++;
            gary.pop();
            ash.pop();
        }
    }
    
    cout << pokemonsDefeateds << endl;

    return 0;
}
