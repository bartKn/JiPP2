//
// Created by Bartosz Kniaziewicz on 09/12/2021.
//

#include "MusicPlayer.h"

void MusicPlayer::addSong(string title) {
    songsList.push_back(title);
}

void MusicPlayer::deleteSong() {
    songsList.pop_front();
}

void MusicPlayer::playNext() {
    it = songsList.begin();
    cout << "Playing - " << (*it) << endl;
    songsList.push_back(*it);
    songsList.pop_front();
}

void MusicPlayer::playPrevious() {
    it = songsList.end();
    it--;
    cout << "Playing - " << (*it) << endl;
}

void MusicPlayer::showSongs() {
    for(it = songsList.begin(); it != songsList.end(); it++, counter++) {
        cout << counter << ". " << (*it) << endl;
    }
    counter = 1;

}
