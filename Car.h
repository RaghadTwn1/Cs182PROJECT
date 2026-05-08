#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

class Car
{
private:
    string licensePlate;
    string brand;
    string model;
    int year;
    double dailyPrice;
    bool available;

public:
    Car();

    Car(string lp, string b, string m,
        int y, double p);

    void display();

    bool isAvailable();

    void setAvailability(bool a);

    double getPricePerDay();

    string getLicensePlate();

    bool operator==(const Car& other);

    bool operator<(const Car& other);
};

#endif