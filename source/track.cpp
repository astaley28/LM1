#include <iostream>
using namespace std;
#include "track.h"

// This is the default Track class constructor
Track::Track() { 
    _trackName = "no track name";
    _duration = 0;
}

// This is a completed Track class constructor
Track::Track(string trackName, int duration){
        _trackName = trackName;
        _duration = duration;
    };