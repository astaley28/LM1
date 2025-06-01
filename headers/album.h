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

    // These get the private variables, as listed in methods 1
    string getName() { return _name;}
    string getArtist() { return _artist;}
    string getGenre() { return _genre; }
    int getReleaseYear() { return _releaseYear; }
    string getPublisher() { return _publisher;}

    void addTrack(string trackName, int duration) {  // This method will add a track to the album, method 2
        tracks.push_back(Track(trackName, duration)); // Create a Track object and push it to the back of the vector
    }

    int getTrackCount() { 
        return tracks.size(); // This will return the number of tracks in the album, method 3
    }
    
    Track getTrack(int index) { 
        if (index < 0 || index >= tracks.size()) {
            cout << "Index out of range" << endl; // This will throw an error if the index is out of range
        }
        return tracks[index]; // This will return the track at the given index, method 4
    }   
};
#endif