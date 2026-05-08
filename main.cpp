#include <iostream>
#include "Agency.h"
#include "Car.h"
#include "Client.h"
#include "Employee.h"

using namespace std;

int main()
{
    Agency agency("Luxury Cars", "Qassim");

    Car c1("111", "Bugatti", "Raghad Edition", 2024, 5000);
    Car c2("222", "BMW", "Shorouq Edition", 2023, 3000);
    Car c3("333", "Mercedes", "Lana Class", 2024, 2200);
    Car c4("444", "Rolls Royce", "Saif Luxury", 2025, 7000);
    Car c5("555", "Porsche", "Dodo Turbo", 2023, 4500);

    agency.addCar(c1);
    agency.addCar(c2);
    agency.addCar(c3);
    agency.addCar(c4);
    agency.addCar(c5);

    Client cl1("Dodo", "Ali", 21, 1);
    Client cl2("Raghad", "Ahmed", 22, 2);
    Client cl3("Lulu", "Khalid", 23, 3);
    Client cl4("Shorouq", "Saad", 24, 4);

    agency.addClient(cl1);
    agency.addClient(cl2);
    agency.addClient(cl3);
    agency.addClient(cl4);

    Employee e1("Faisal", "Saud", 40,
        "Manager", 20000);

    Employee e2("Nora", "Fahad", 30,
        "Assistant", 15000);

    agency.addEmployee(e1);
    agency.addEmployee(e2);

    cout << "\n=================================================\n";
    cout << "                 AVAILABLE CARS\n";
    cout << "=================================================\n";

    agency.showAvailableCars();

    cout << "\n=================================================\n";
    cout << "                  CAR COMPARISON\n";
    cout << "=================================================\n";

    cout << "\nComparison by License Plate:\n";

    if (c1 == c2)
        cout << "Result : Cars have same plate number\n";
    else
        cout << "Result : Cars have different plate numbers\n";

    cout << "\nComparison by Daily Price:\n";

    if (c1 < c2)
        cout << "Result : Car 1 has lower daily price\n";
    else
        cout << "Result : Car 2 has lower daily price\n";

    cout << "\n=================================================\n";
    cout << "                  RENTAL PROCESS\n";
    cout << "=================================================\n\n";

    agency.processRental(cl1, agency.getCar(0));

    cout << "\n=================================================\n";
    cout << "           AVAILABLE CARS AFTER RENTAL\n";
    cout << "=================================================\n";

    agency.showAvailableCars();

    cout << "\n=================================================\n";
    cout << "               EMPLOYEE INFORMATION\n";
    cout << "=================================================\n";

    e1.displayEmployee();

    cout << endl;

    e2.displayEmployee();

    return 0;
}