#include <iostream>
using namespace std;

struct People {
    string name;
    int age;

    void infoPeople() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

int main() {
    People people;
    people.age = 20;
    people.name = "Maria";
    people.infoPeople();
    return 0;
}
