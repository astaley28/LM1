#ifndef _TRACK_H_
#define _TRACK_H_

#include <string>
using namespace std;

class Track {
private:
    string _name;
    int _duration;

    public: //Constructors
    Track() { //Track Initializations
        _name = "no track name";
        _duration = 0;
    }
};
#endif