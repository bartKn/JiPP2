#include "Note.h"
#include <iostream>

using namespace std;

Note::Note() {}

Note::Note(string title): title(title) {}

string Note::getTitle() {
    return title;
}

void Note::setTitle(string title) {
    this->title = title;
}

