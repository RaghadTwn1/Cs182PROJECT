#ifndef CLIENT_H
#define CLIENT_H

#include "Person.h"

class Client : public Person {
private:
    int clientId;

public:
    Client();
    Client(string n, string s, int a, int id);

    void displayClient();
    int getId();
};

#endif