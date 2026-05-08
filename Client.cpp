#include "Client.h"

Client::Client() : Person("", "", 0) {
    clientId = 0;
}

Client::Client(string n, string s, int a, int id)
    : Person(n, s, a) {
    clientId = id;
}

void Client::displayClient() {
    display();
    cout << "Client ID: " << clientId << endl;
}

int Client::getId() {
    return clientId;
}