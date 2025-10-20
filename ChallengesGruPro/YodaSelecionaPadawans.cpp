#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct YoungStats {
    string name;
    int missionsAccepted;
    int missionsFailed;

    int total() {
        return missionsAccepted - missionsFailed;
    }
};

int main() {
    YoungStats youngStats;
    vector<YoungStats> young;
    int amountOfYoungs;
    cin >> amountOfYoungs;

    for (int i = 0; i < amountOfYoungs; i++) {
        cin >> youngStats.name >> youngStats.missionsAccepted >> youngStats.missionsFailed;
        young.push_back(youngStats);
    }

    sort(young.begin(), young.end(), 
        [](const YoungStats& a, const YoungStats& b) {
            return a.name < b.name;
        }
    );

    for (int i = 0; i < amountOfYoungs; i++) {
        cout << young[i].name << " " << young[i].total() << endl;
    }

    return 0;
}
