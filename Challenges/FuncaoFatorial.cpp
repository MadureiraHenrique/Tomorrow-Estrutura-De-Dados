#include <iostream>

using namespace std;

int fat(int n) {
    int total = n;
    int mult = 1;
    for (int i = n; i > 1; i--) {
        mult *= i;
    }
    return mult;
};

int main() {
    int n;
    cin >> n;
    cout << fat(n) << endl;
    return 0;
}
