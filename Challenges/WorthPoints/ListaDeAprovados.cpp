#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

int main() {
    string name;
    getline(cin, name);

    int quantityOfNames;
    cin >> quantityOfNames;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> names;
    string cache;

    for (int i = 0; i < quantityOfNames; i++) {
        getline(cin, cache);
        names.push_back(cache);
    }

    bool encountered = false;

    for (int i = 0; i < names.size(); i++) {
        if (name == names[i]) {
            encountered = true;
            break;
        }
    }

    if (encountered) {
        cout << "PARABENS" << endl;
    } else {
        cout << "Vamos esperar a 2a chamada" << endl;
    }

    return 0;
}
