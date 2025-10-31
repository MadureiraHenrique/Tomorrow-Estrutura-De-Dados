#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> peoples;
    queue<int> peoplesPair;

    int quantityOfPeoples;
    cin >> quantityOfPeoples;
    
    int cache;

    for (int i = 0; i < quantityOfPeoples; i++) {
        cin >> cache; 
        peoples.push(cache);
        if(peoples.back() % 2 == 0) {
            peoplesPair.push(peoples.back());
        }
    }

    for (int i = 0; i < quantityOfPeoples; i++) {
        if ((peoples.front() % 2) != 0) {
            cout << peoples.front() << endl;
            peoples.pop();
        } else {
            peoples.pop();
        }
    }

    const int cont = peoplesPair.size();

    for (int i = 0; i < cont; i++) {
        cout << peoplesPair.front() << endl;
        peoplesPair.pop();
    }

    return 0;
}
