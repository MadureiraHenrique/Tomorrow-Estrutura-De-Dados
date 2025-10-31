#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Datas {
    int day;
    int month;
    int year;
};

int main() {
    Datas datas;
    vector<Datas> newData;

    while (cin >> datas.day >> datas.month >> datas.year) { 
        newData.push_back(datas);
    }

    sort(newData.begin(), newData.end(),
         [](const Datas &a, const Datas &b) {
            if ((a.year != b.year)) return a.year < b.year;
            if (a.month != b.month) return a.month < b.month;
            return a.day < b.day;
    });

    for (const auto &data : newData) {
        cout << data.day << " " << data.month << " " << data.year << endl;
    }

    return 0;
}
