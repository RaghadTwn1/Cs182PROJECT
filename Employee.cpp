#include "Employee.h"

Employee::Employee()
    : Person("", "", 0), Worker("", 0)
{
}

Employee::Employee(string n, string s, int a,
    string p, double sal)
    : Person(n, s, a), Worker(p, sal)
{
}

void Employee::displayEmployee()
{
    cout << "\n---------------------------------\n";

    cout << "Employee Name : "
        << name << " " << surname << endl;

    cout << "Age           : "
        << age << endl;

    cout << "Position      : "
        << position << endl;

    cout << "Salary        : "
        << salary << " SAR" << endl;

    cout << "---------------------------------\n";
}