#include <iostream>
#include <string>
using namespace std;
#include "album.h"
#include "track.h" 
vector<Track> tracks; // This is a vector that will hold the tracks in the album


int main() { 
   
//This shows the Album information and how to add tracks to the album, method 2    
Album Album1("Cleopatra", "The Lumineers", "Folk Rock", 2016, "Dualtone Music Group");
Album1.addTrack("Sleep on the Floor", 211), Album1.addTrack("Ophelia", 159), Album1.addTrack("Angela", 201), Album1.addTrack("Cleopatra", 201),Album1.addTrack("In the Light", 231);

//This is the same as above, but for Album 2
Album Album2("Orange Blood", "Mt. Joy", "Indie Rock", 2022, "Fantasy Records");
Album2.addTrack("Orange Blood", 225), Album2.addTrack("Lemon Tree", 248), Album2.addTrack("Roly Poly", 156), Album2.addTrack("Bathroom Light", 187), Album2.addTrack("Johnson Song", 223); 

//This shows all of the Album information for Album 1, method 6
cout << "Album Name: " << Album1.getName() << ", Album Artist: " << Album1.getArtist() << ", Album Genre: " 
    << Album1.getGenre() << ", Release Year: " << Album1.getReleaseYear() << ", Publisher: " << Album1.getPublisher() << ". " << endl;

//This displays the number of tracks in Album 2, including the track name and duration, a combination of methods 3 and 4
cout << "Album 2 has " << Album2.getTrackCount() << " tracks:" << endl;
    for (int i = 0; i < Album2.getTrackCount(); i++) {          //This line adds up the number of tracks in the 2nd album
        Track track = Album2.getTrack(i);
        cout << "Track " << i + 1 << ": " << track.getTrackName() //Thiss displays the track number and name
             << " (" << track.getDuration() / 60 << ":"         //This line determines the number of minutes in the song
             << track.getDuration() % 60 << ")" << endl;}        //This line determines the number of seconds in the song
    

// Calculate total duration of Album1, method 5
int total = 0;
for (int t = 0; t < Album2.getTrackCount(); ++t) {              //This line adds up the total duration of all the tracks in Album 2
    total += Album2.getTrack(t).getDuration();
}
cout << "The total duration of the album 2 is " << total / 60 << " m " << total % 60 << " s." << endl;     //This line displays the total duration of Album 2 in minutes and seconds

return 0; 
}
   


