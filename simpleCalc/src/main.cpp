#include <iostream>
#include <cstring>
#include "calc.h"

using namespace std;

int main(int argc, char *argv[]) {
    if (strcmp(argv[1], "add") == 0) {
        add(atoi(argv[2]), atoi(argv[3]), argc);
    } else if (strcmp(argv[1], "subtract") == 0) {
        subtract(atoi(argv[2]), atoi(argv[3]), argc);
    } else if (strcmp(argv[1], "volume") == 0) {
        volume((float)atoi(argv[2]), (float)atoi(argv[3]), (float)atoi(argv[4]), (float)atoi(argv[5]), argc);
    } else {
        cout << "Błąd\n";
        printHelp();
    }
    return 0;
}

