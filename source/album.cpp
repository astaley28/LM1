#include <iostream>
using namespace std;
#include "album.h"

Album::Album() {
    _name = "no name";
    _artist = "no artist";
    _genre = "no genre";
    _releaseYear = -1;
    _publisher = "no publisher"; 
}

Album::Album(string name, string artist, string genre, int releaseYear, string publisher) {
        _name = name;
        _artist = artist;
        _genre = genre;
        _releaseYear = releaseYear;
        _publisher = publisher;
    };