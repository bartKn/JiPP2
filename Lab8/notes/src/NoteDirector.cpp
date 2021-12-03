#include <iostream>
#include "NoteDirector.h"

using namespace std;

NoteDirector::NoteDirector() {}

void NoteDirector::addNote() {
    string title, content;

    bool isTitleOk = false;

    while(!isTitleOk) {
        cout << "Title - ";
        getline(cin, title);

        isTitleOk = true;
        for (int i = 0; i < noteList.size(); ++i) {
            if (noteList[i].getTitle() == title) {
                cout << "Note with that tile already exist, try again." << endl;
                isTitleOk = false;
            }
        }
    }

    cout << "Content - ";
    getline(cin, content);

    TextNote newNote;
    newNote.setTitle(title);
    newNote.setContent(content);

    noteList.push_back(newNote);
}

void NoteDirector::deleteNote() {
    string title;
    cout << "Title of the note you want to delete - ";
    getline(cin, title);

    bool deleted = false;

    for (int i = 0; i < noteList.size(); ++i) {
        if (noteList[i].getTitle() == title) {
            noteList.erase(noteList.begin() + i);
            deleted = true;
        }
    }

    if (!deleted)
        cout << "Note with that title doesn't exist." << endl;
}

void NoteDirector::editNote() {
    string title, content;
    cout << "Title of the note you want to edit - ";
    getline(cin, title);

    bool edited = false;

    for (int i = 0; i < noteList.size(); ++i) {
        if (noteList[i].getTitle() == title) {
            cout << "Current status of the note:" << noteList[i].getContent() << endl;
            cout << "Text to be added - ";
            getline(cin, content);
            content = noteList[i].getContent() + content;
            noteList[i].setContent(content);
            edited = true;
        }
    }

    if (!edited)
        cout << "Note with that title doesn't exist." << endl;

}

void NoteDirector::clearNoteList() {
        noteList.clear();
        cout << "All notes have been deleted." << endl;
}

void NoteDirector::printNoteList() {
    if (noteList.size() == 0)
        cout << "List is empty" << endl;
    else {
        cout << "List of notes" << endl;
        cout << "---------------" << endl;
        for (int i = 0; i < noteList.size(); ++i) {
            cout << i + 1 << ". " << noteList[i].getTitle() << endl;
        }
        cout << "---------------" << endl;
    }
}


