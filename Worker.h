#ifndef WORKER_H
#define WORKER_H

#include <iostream>
using namespace std;

class Worker {
protected:
    string position;
    double salary;

public:
    Worker();
    Worker(string p, double s);

    void displayWorker();
};

#endif