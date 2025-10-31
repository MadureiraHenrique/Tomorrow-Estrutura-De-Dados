#include <iostream>
#include <stack>
#include <random>

using namespace std;

int main() {
    random_device rand;
    mt19937 gerator(rand());
    uniform_int_distribution<> distribuation(0, 9);

    stack<int> numbers; // stack or pilha
    int quantityOfRows = 5;
    for (int i = 0; i < quantityOfRows; i++) {
        numbers.push(distribuation(gerator));
        if (!numbers.empty()) {
            cout << numbers.top() << endl;
        } else {
            cout << "your stack is empty!" << endl;
        }
    }

    return 0;
}
