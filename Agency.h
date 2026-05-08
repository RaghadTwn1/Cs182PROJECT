#ifndef AGENCY_H
#define AGENCY_H

#include <iostream>
#include "Car.h"
#include "Client.h"
#include "Employee.h"
using namespace std;

class Agency {
private:
    string agencyName;
    string address;

    Car cars[50];
    Client clients[50];
    Employee employees[10];

    int carCount;
    int clientCount;
    int employeeCount;

public:
    Agency(string name, string addr);

    void addCar(Car c);
    void addClient(Client c);
    void addEmployee(Employee e);

    void showAvailableCars();

    void processRental(Client client, Car& car);

    Car& getCar(int index);
};

#endif