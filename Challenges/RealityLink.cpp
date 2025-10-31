#include <iostream>
#include <vector>

using namespace std;

int main() {
    int sizeOfVect;
    cin >> sizeOfVect;

    vector<int> vect;

    int number;
    for (int i = 0; i < sizeOfVect; i++) {
        cin >> number;
        vect.push_back(number);
    }

    int numberRepeated;
    cin >> numberRepeated;

    int count = 0;
    for (int i = 0; i < sizeOfVect; i++) {
        if (numberRepeated == vect[i]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}