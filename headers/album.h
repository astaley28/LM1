#ifndef _ALBUM_H_
#define _ALBUM_H_

#include <string>
#include <vector>
#include "track.h"
using namespace std;

class Album {
private:
    string _name;           //This is the album name
    string _artist;         //This is the artist name
    string _genre;          //This is the genre of the album
    int _releaseYear;       //This is the year the album was released
    string _publisher;      //This is the publisher of the album
    vector<Track> tracks;   // This is a vector that will hold the tracks in the album

public:     //Constructors  
    Album();
    Album(string name, string artist, string genre, int releaseYear, string publisher);

    // These are the getters for the private variables, as listed in methods 1
    string getName() { return _name;}
    string getArtist() { return _artist;}
    string getGenre() { return _genre; }
    int getReleaseYear() { return _releaseYear; }
    string getPublisher() { return _publisher;}

    void addTrack(string trackName, int duration) {  // This method will add a track to the album
        tracks.emplace_back(trackName, duration);
    }
    
    


};
#endif