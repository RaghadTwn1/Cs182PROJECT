#include "Worker.h"

Worker::Worker() {
    position = "";
    salary = 0;
}

Worker::Worker(string p, double s) {
    position = p;
    salary = s;
}

void Worker::displayWorker() {
    cout << "Position: " << position
        << ", Salary: " << salary << endl;
}