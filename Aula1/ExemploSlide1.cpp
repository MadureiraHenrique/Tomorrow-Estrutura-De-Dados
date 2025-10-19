#include <iostream>
using namespace std;

int main() {
    People people;
    people.age = 20;
    people.name = "Maria";
    people.infoPeople();
    return 0;
}

struct People {
    string name;
    int age;

    void infoPeople() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
