#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    pair<string, int> newPeople;
    vector<pair<string, int>> peoples;
    queue<string> queueOfPeoplesServed;
    
    int daysOfService, servicedPeoples, numberOfPeoples;
    cin >> daysOfService >> servicedPeoples;
    
    for (int i = 0; i < daysOfService; i++) {
        cin >> numberOfPeoples;
        for (int i = 0; i < numberOfPeoples; i++) {
            cin >> newPeople.first >> newPeople.second;
            peoples.push_back(newPeople);
        }
        // use a function sort;
        peoples.clear();
    }   

    while (!queueOfPeoplesServed.empty()) {
        cout << queueOfPeoplesServed.front() << endl;
        queueOfPeoplesServed.pop();
    }

    return 0;
}
