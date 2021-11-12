#include "Car.h"

float Car::newestSoftVersion = 1.2;

Car::Car(string id, string n, int s, string t):
idNumber(id),
name(n),
seats(s),
type(t){
    passengers = new string[seats];
    for (int i = 0; i < seats; ++i) {
        passengers[i] = "empty";
    }
    actualSoftVersion = 1.1;
}

Car::Car(Car &c) {
    idNumber = c.idNumber;
    name = c.name;
    seats = c.seats;
    type = c.type;
    passengers = new string[seats];
    for (int i = 0; i < seats; ++i) {
        passengers[i] = c.passengers[i];
    }
}

Car::~Car() {
    delete [] passengers;
}

void Car::setName(string name_) {
    this->name = name_;
}

void Car::setIdNumber(string idNumber_) {
    this->idNumber = idNumber_;
}

string Car::getName() const {
    return name;
}

string Car::getIdNumber() const {
    return idNumber;
}

string Car::getType() const {
    return type;
}

void Car::printCarInfo() {
    cout << "id - " << idNumber;
    cout << "\nname - " << name;
    cout << "\nseats - " << seats;
    cout << "\ntype - " << type;
    cout << "\nPassengers data:";
    for (int i = 0; i < seats; ++i) {
        cout << "\nseat " << i + 1 << ". " << passengers[i];
    }
    cout << endl;
}

void Car::addPassenger(int seatNum, string passengerName) {
    if (passengers[seatNum - 1] != "empty") {
        cout << "to miejsce jest zajete!\n";
    } else {
        passengers[seatNum - 1] = passengerName;
    }
}

void Car::printSoftVersion() const {
    cout << "soft version = " << actualSoftVersion << endl;
}

void Car::updateSoftVersion() {
    this->actualSoftVersion = newestSoftVersion;
    printSoftVersion();
}

void Car::releaseNewSoft(float newVersion) {
    newestSoftVersion = newVersion;
}
