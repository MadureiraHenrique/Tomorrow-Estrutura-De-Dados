#include <iostream>

using namespace std;

int pot(int base, int exp) {
    int total = 1;
    for (int i = 0; i < exp; i++) {
        total *= base;
    }

    return total;   
}

int main() {
    int x, e;
    cin >> x >> e;
    cout << pot(x,e) << endl;
    return 0;
}