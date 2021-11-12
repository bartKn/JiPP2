#ifndef JIPPV2_CAR_H
#define JIPPV2_CAR_H

#include <iostream>

using namespace std;

class Car {
    string idNumber;
    string name;
    int seats;
    string* passengers;
    string type;
    static float newestSoftVersion;
    float actualSoftVersion;

public:
    Car(string id = "null", string n = "null", int s = 0, string t = "null");
    Car(Car &c);
    ~Car();
    void setIdNumber(string idNumber_);
    void setName(string name_);
    string getName() const;
    string getIdNumber() const;
    string getType() const;
    void printCarInfo();
    void addPassenger(int seatNum, string passengerName);
    void printSoftVersion() const;
    void updateSoftVersion();
    static void releaseNewSoft(float newVersion);
};




#endif //JIPPV2_CAR_H
