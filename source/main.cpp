#include <iostream>
using namespace std;


class Album {
private:
    string _name;
    string _artist;
    string _genre;
    int _releaseYear;
    string _publisher;

public: 
    ////Constructors
    Album() { ////Initializations
       _name = "no name";
       _artist = "no artist";
       _genre = "no genre";
       _releaseYear = -1;
       _publisher = "no publisher"; 
    }

    Album(string name, string artist, string genre, int releaseYear = -1, string publisher) {
        _name = name;
        _artist = artist;
        _genre = genre;
        _releaseYear = releaseYear;
        _publisher = publisher;
    }
//void setGenre(string _genre){}
};

class Track {
private:
    string _name;
    int _duration;

    public:
    Track() {
        _name = "no track name";
        _duration = 0;


    }
};

int main() {
    Album Album1("The Lumineers", "The Lumineers", "Folk", 2012, "Dualtone Records");
    Album Album2("Orange Blood", "Mt Joy", "Indie Folk", 2022, "Island Records");
    Album Album3("Moment of Truth", "Red Clay Strays", "Country Rock", 2022, " ");

return 0;    
}

