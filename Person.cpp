#include "Person.h"

Person::Person() {
    name = "";
    surname = "";
    age = 0;
}

Person::Person(string n, string s, int a) {
    name = n;
    surname = s;
    age = a;
}

void Person::display() {
    cout << "Name: " << name << " " << surname
        << ", Age: " << age << endl;
}

string Person::getName() {
    return name;
}

string Person::getSurname() {
    return surname;
}