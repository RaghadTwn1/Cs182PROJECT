#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    string surname;
    int age;

public:
    Person();
    Person(string n, string s, int a);

    void display();
    string getName();
    string getSurname();
};

#endif