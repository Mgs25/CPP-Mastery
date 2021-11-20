// Section 20
// Challenge 2
//  Lists

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }
    
    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating << std::endl;
       return os;
}

void display_menu() {
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
    std::cout << "Playing:" << std::endl;
    std::cout << song << std::endl;
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
    for (const Song& i: playlist) {
        std::cout << i;
    }
    play_current_song(current_song);
}

int main() {
    std::list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}          
    };
    
    auto current_song = playlist.begin();
    char ch;
    
    do {
        display_menu();
        std::cin >> ch;
        ch = std::toupper(ch);
        
        if (ch == 'F') {
            std::cout << "Playing first song!" << std::endl;
            current_song = playlist.begin();
            play_current_song(*current_song);
        }
        else if (ch == 'N') {
            std::cout << "Playing next song!" << std::endl;
            advance(current_song, current_song == --playlist.end() ? -(playlist.size() - 1) : 1);
            play_current_song(*current_song);
        }
        else if (ch == 'P') {
            std::cout << "Playing previous song!" << std::endl;
            advance(current_song, current_song == playlist.begin() ? (playlist.size() - 1) : -1);
            play_current_song(*current_song);
        }
        else if (ch == 'A') {
            std::string song_name {}, artist_name {};
            int rating {};
            std::cout << "Enter song name: ";
            std::cin.ignore();
            getline(std::cin, song_name);
            std::cout << "Enter song artist: ";
            getline(std::cin, artist_name);
            std::cout << "Enter song rating: ";
            std::cin >> rating;
            
            playlist.insert(current_song, Song {song_name, artist_name, rating});
        }
        else if (ch == 'L') {
            display_playlist(playlist, *current_song);
        }
    } while (ch != 'Q');
    
    std::cout << "Thanks for listening!" << std::endl;
    return 0;
}