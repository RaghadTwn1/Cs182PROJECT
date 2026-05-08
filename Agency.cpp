#include "Agency.h"

Agency::Agency(string name, string addr) {
    agencyName = name;
    address = addr;
    carCount = 0;
    clientCount = 0;
    employeeCount = 0;
}

void Agency::addCar(Car c) {
    if (carCount < 50) {
        cars[carCount++] = c;
    }
}

void Agency::addClient(Client c) {
    if (clientCount < 50) {
        clients[clientCount++] = c;
    }
}

void Agency::addEmployee(Employee e) {
    if (employeeCount < 10) {
        employees[employeeCount++] = e;
    }
}

void Agency::showAvailableCars() {
    cout << "\n===== Available Cars =====\n";
    for (int i = 0; i < carCount; i++) {
        if (cars[i].isAvailable()) {
            cars[i].display();
        }
    }
}

void Agency::processRental(Client client, Car& car)
{
    if (car.isAvailable())
    {
        car.setAvailability(false);

        double total = car.getPricePerDay() * 5;

        cout << "Rental Status : Successfully Reserved\n\n";

        cout << "Client Name   : "
            << client.getName()
            << " "
            << client.getSurname()
            << endl;

        car.display();

        cout << "Rental Days   : 5 Days" << endl;

        cout << "Total Cost    : "
            << total
            << " SAR\n";
    }

    else
    {
        cout << "Car is not available\n";
    }
}
Car& Agency::getCar(int index) {
    return cars[index];
}