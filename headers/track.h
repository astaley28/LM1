#ifndef _TRACK_H_
#define _TRACK_H_

#include <string>
using namespace std;

class Track {
private:    //Constructors
    string _trackName;
    int _duration;  //duration will be in seconds, so that I can divide by 60 for minutes and % by 60 for seconds

    public: 
    Track ();
    Track(string trackName, int duration); 
    
    string getTrackName() { return _trackName; }
    int getDuration() { return _duration; }

    
};
#endif