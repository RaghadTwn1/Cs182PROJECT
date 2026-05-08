#include "Car.h"

Car::Car()
{
    licensePlate = "";
    brand = "";
    model = "";
    year = 0;
    dailyPrice = 0;
    available = true;
}

Car::Car(string lp, string b, string m,
    int y, double p)
{
    licensePlate = lp;
    brand = b;
    model = m;
    year = y;
    dailyPrice = p;
    available = true;
}

void Car::display()
{
    cout << "\n-----------------------------------\n";

    cout << "Plate Number : "
        << licensePlate << endl;

    cout << "Brand        : "
        << brand << endl;

    cout << "Model        : "
        << model << endl;

    cout << "Year         : "
        << year << endl;

    cout << "Daily Price  : "
        << dailyPrice << " SAR" << endl;

    if (available)
        cout << "Status       : Available\n";
    else
        cout << "Status       : Not Available\n";

    cout << "-----------------------------------\n";
}

bool Car::isAvailable()
{
    return available;
}

void Car::setAvailability(bool a)
{
    available = a;
}

double Car::getPricePerDay()
{
    return dailyPrice;
}

string Car::getLicensePlate()
{
    return licensePlate;
}

bool Car::operator==(const Car& other)
{
    return licensePlate == other.licensePlate;
}

bool Car::operator<(const Car& other)
{
    return dailyPrice < other.dailyPrice;
}