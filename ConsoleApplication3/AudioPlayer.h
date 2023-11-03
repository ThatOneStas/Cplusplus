#pragma once
#include <iostream>
#include "MediaPlayer.h"
using namespace std;

class AudioPlayer :
    public MediaPlayer
{
private:
    int sound;
public:
    AudioPlayer() {
        sound = 0;
    }
    void regulate(string choice) {
        if (choice == "+") {
            sound += 2;
        }
        else if (choice == "-") {
            sound -= 2;
        }
    }

    int getSound() {
        return sound;
    }
};

