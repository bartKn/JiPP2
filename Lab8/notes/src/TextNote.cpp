#include "TextNote.h"

TextNote::TextNote() {}

TextNote::TextNote(string title) : Note(title) {}

string TextNote::getContent() {
    return content;
}

void TextNote::setContent(string content) {
    this->content = content;
}




