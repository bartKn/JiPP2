#include <iostream>
#include "Car.h"

using namespace std;

int main() {
    Car car1("KR 1234", "car1", 5, "xx");
    car1.addPassenger(1, "Jan Nowak");
    car1.addPassenger(3, "Jan Kowalski");
    cout << "Car1" << endl;
    car1.printCarInfo();

    Car car1Copy(car1);
    cout << endl << "Car1Copy" << endl;
    car1Copy.printCarInfo();
    car1Copy.setIdNumber("1234 KR");
    car1Copy.setName("car1Copy");

    cout << endl << "Car1Copy - po zmianach" << endl;
    car1Copy.printCarInfo();
    cout << endl << "Car1" << endl;
    car1.printCarInfo();


    car1.printSoftVersion();
    car1.updateSoftVersion();
    Car::releaseNewSoft(1.3);
    car1.updateSoftVersion();

}
