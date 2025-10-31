#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

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

        stable_sort(peoples.begin(), peoples.end(), 
            [](const pair<string,int> & pessoaA, const pair<string,int> & pessoaB) {
                return pessoaA.second > pessoaB.second;    
            }
        );

        int a_atender = min((int)peoples.size(), servicedPeoples);
        
        for (int i = 0; i < servicedPeoples; i++) {
            queueOfPeoplesServed.push(peoples[i].first);
        }

        peoples.erase(peoples.begin(), peoples.begin() + a_atender);
    }   

    while (!queueOfPeoplesServed.empty()) {
        cout << queueOfPeoplesServed.front() << endl;
        queueOfPeoplesServed.pop();
    }

    return 0;
}
