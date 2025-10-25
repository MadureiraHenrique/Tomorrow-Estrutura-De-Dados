#include <iostream>
#include <queue>
#include <random>

using namespace std;

int main() {
    random_device rand;
    mt19937 generator(rand());
    uniform_int_distribution<> distribution(0, 9);

    queue<int> pessoas; // fila
    for (int i = 0; i < 5; i++) {
        pessoas.push(distribution(generator));
        cout << pessoas.back() << endl;
    }

    return 0;
}
