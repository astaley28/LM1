#ifndef _ALBUM_H_
#define _ALBUM_H_

#include <string>
using namespace std;

class Album {
private:
    string _name;
    string _artist;
    string _genre;
    int _releaseYear;
    string _publisher;

public:
    Album();
    Album(string name, string artist, string genre, int releaseYear, string publisher);
};
#endif