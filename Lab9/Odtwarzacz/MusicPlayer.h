//
// Created by Bartosz Kniaziewicz on 09/12/2021.
//

#ifndef JIPPV2_MUSICPLAYER_H
#define JIPPV2_MUSICPLAYER_H

#include <iostream>
#include <list>
#include <string>

using namespace std;


class MusicPlayer {
private:
    int counter = 1;
    list <string> songsList;
    list <string> ::iterator it;
public:
    void addSong(string title);
    void deleteSong();
    void playNext();
    void playPrevious();
    void showSongs();

};


#endif //JIPPV2_MUSICPLAYER_H
