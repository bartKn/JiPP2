//
// Created by Bartosz Kniaziewicz on 09/12/2021.
//

#include <iostream>
#include "MusicPlayer.h"

using namespace std;

int main() {
    MusicPlayer musicPlayer;
    musicPlayer.addSong("First");
    musicPlayer.addSong("Second");
    musicPlayer.addSong("Third");
    musicPlayer.showSongs();
    musicPlayer.playNext();
    musicPlayer.showSongs();
    musicPlayer.playPrevious();
    musicPlayer.showSongs();

}