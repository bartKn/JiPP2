#include <iostream>
#include "NoteDirector.h"

using namespace std;

int main() {
    bool loop = true;
    int choice;

    NoteDirector noteDirector;

    while (loop) {
        cout << "1. Add note" << endl;
        cout << "2. Delete note" << endl;
        cout << "3. Edit note" << endl;
        cout << "4. Clear notes list" << endl;
        cout << "5. Print all notes" << endl;
        cout << "6. Exit" << endl;
        cout << "> ";
        cin >> choice;
        cin.ignore(256, '\n');

        switch (choice) {
            case 1:
                noteDirector.addNote();
                break;
            case 2:
                noteDirector.deleteNote();
                break;
            case 3:
                noteDirector.editNote();
                break;
            case 4:
                noteDirector.clearNoteList();
                break;
            case 5:
                noteDirector.printNoteList();
                break;
            case 6:
                loop = false;
                break;
            default:
                cout << "Entered value is incorrect!" << endl;
        }
    }
}

