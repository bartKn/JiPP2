#include <iostream>

using namespace std;

int main() {
    // wskaznik na stala
    cout << "Wskaznik na stala" << endl << "----------------" << endl;
    int cVal = 123;
    const int *p = &cVal;
    cout << *p << endl;
    // mozemy modyfikowac wskaznik, nie mozemy modyfikowac wartosci na ktora wskazuje
    // *p = 456; takiej operacji nie da sie wykonac

    int cVal2 = 321;
    p = &cVal2; // modyfikujemy wskaznik - to mozna zrobic
    cout << *p << endl;

    // staly wskaznik
    cout << "----------------" << "\n\nStaly wskaznik" << endl << "----------------" << endl;
    int cVal3 = 123;
    int *const p2 = &cVal3;
    cout << *p2 << endl;
    // mozemy modyfikowac wartosc, nie mozemy modyfikowac wskaznika

    *p2 = 321; // modyfikacja wartosci, to ze stalym wskaznikiem mozna zrobic
    // p2 = &cVal; tej operacji nie mozna wykonac, probujemy modyfikowac wskaznik

    cout << *p2 << endl;



    // polaczenie obu wlasnosci - staly wskaznik na stala wartosc

    const int *const pntr = &cVal;
    // *pntr = 2;       nie mozemy wykonac takich operacji
    // pntr = &cVal2;



}