#ifndef JIPPV2_NOTE_H
#define JIPPV2_NOTE_H

#include <iostream>

using namespace std;


class Note {
protected:
    string title;

public:
    Note();
    Note(string title);
    string getTitle();
    void setTitle(string title);
    virtual string getContent() = 0;
    virtual void setContent(string content) = 0;

};


#endif //JIPPV2_NOTE_H
