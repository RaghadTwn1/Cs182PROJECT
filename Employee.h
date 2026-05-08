#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include "Worker.h"

class Employee : public Person, public Worker {
public:
    Employee();
    Employee(string n, string s, int a, string p, double sal);

    void displayEmployee();
};

#endif