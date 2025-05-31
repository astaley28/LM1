#include <iostream>
using namespace std;
#include "track.h"

Track::Track() {
    _trackName = "no track name";
    _duration = 0;
}

Track::Track(string trackName, int duration){
        _trackName = trackName;
        _duration = duration;
    };