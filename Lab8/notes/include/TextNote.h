#ifndef JIPPV2_TEXTNOTE_H
#define JIPPV2_TEXTNOTE_H

#include <iostream>
#include "Note.h"

using namespace std;


class TextNote: public Note{
protected:
    string content;

public:
    TextNote();
    TextNote(string title);
    string getContent() override;
    void setContent(string content) override;
};


#endif //JIPPV2_TEXTNOTE_H
