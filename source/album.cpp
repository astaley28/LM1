#include <iostream>
using namespace std;
#include "album.h"

// This is the default Album class constructor
Album::Album() {
    _name = "no name";
    _artist = "no artist";
    _genre = "no genre";
    _releaseYear = -1;
    _publisher = "no publisher"; 
}

// This is a completed Album class constructor
Album::Album(string name, string artist, string genre, int releaseYear, string publisher) {
        _name = name;
        _artist = artist;
        _genre = genre;
        _releaseYear = releaseYear;
        _publisher = publisher;
    };

//This is the Album class constructor, and the added tracks in each Album
/*  Album Album1("Cleopatra", "The Lumineers", "Folk Rock", 2016, "Dualtone Records");
    Album1.addTrack("Sleep on the Floor", 211);
    Album1.addTrack("Ophelia", 159);
    Album1.addTrack("Angela", 201);
    Album1.addTrack("Cleopatra", 201);
    Album1.addTrack("In the Light", 231);
    
    Album Album2("Orange Blood", "Mt. Joy", "Indie Rock", 2022, "Fantasy Records");
    Album2.addTrack("Orange Blood", 225);
    Album2.addTrack("Lemon Tree", 248);
    Album2.addTrack("Roly Poly", 156);
    Album2.addTrack("Bathroom Light", 187);
    Album2.addTrack("Johnson Song", 223);  */