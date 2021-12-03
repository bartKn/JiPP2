#ifndef JIPPV2_NOTEDIRECTOR_H
#define JIPPV2_NOTEDIRECTOR_H

#include <iostream>
#include <vector>
#include "Note.h"
#include "TextNote.h"


class NoteDirector: public TextNote {
private:
    vector<TextNote> noteList;
public:
    NoteDirector();
    void addNote();
    void deleteNote();
    void editNote();
    void clearNoteList();
    void printNoteList();
};


#endif //JIPPV2_NOTEDIRECTOR_H
