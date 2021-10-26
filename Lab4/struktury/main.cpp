#include <iostream>

using namespace std;

struct samochod {
    string marka;
    string model;
    int rok;
    string kolor;
    float pojemnosc;
};

struct info {
    string marka;
    int ilosc;
};


info* findMax(samochod* autko, int amount) {
    info* carInfo;
    carInfo = new info [amount];
    for (int i = 0; i < amount; ++i) {
        for (int j = 0; j < amount; ++j) {
            if (autko[i].marka == carInfo[j].marka || carInfo[j].marka == "" ) {
                carInfo[j].marka = autko[i].marka;
                carInfo[j].ilosc += 1;
                break;
            }
        }
    }
    return carInfo;
}

int lowestYear(samochod* autko, int amount) {
    int index = 0;
    int yougest = autko[0].rok;
    for (int i = 1; i < amount; ++i) {
        if (autko[i].rok < yougest) {
            yougest = autko[i].rok;
            index = i;
        }
    }
    return index;
}



int main() {

    int amount = 4;

    samochod autko[] = {
            {"Ford", "Focus", 2014, "czarny", 2.5},
            {"Citroen", "Saxo", 2001, "szary", 1.1},
            {"Ford", "Fiesta", 2016, "bialy", 2.0 },
            {"Renault", "Clio", 2008, "zielony", 1.6},
    };

    cout << "Marka \tModel \tRok \tKolor \tPojemosc" << endl;
    cout << "----------------------------------" << endl;
    for (int i = 0; i < amount; ++i) {
        cout << autko[i].marka << "\t" << autko[i].model << "\t" << autko[i].rok << "\t" << autko[i].kolor << "\t" << autko[i].pojemnosc << endl;
    }

    info* carInfo;
    carInfo = findMax(autko, amount);
    cout << endl << endl << "Marka \tIlosc aut tej marki" << endl;
    cout << "----------------------------------" << endl;
    int counter = 0;
    while (carInfo[counter].marka != "") {
        cout << carInfo[counter].marka << "\t" << carInfo[counter].ilosc << endl;
        counter++;
        if (counter == amount) break;
    }

    int yougestIndex = lowestYear(autko, amount);
    cout << endl << endl << "Auto wyprodukowane najwczesniej to: " << endl;
    cout << autko[yougestIndex].marka << " " << autko[yougestIndex].model << " - " << autko[yougestIndex].rok << endl;

    return 0;
};