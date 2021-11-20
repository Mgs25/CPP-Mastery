#include <iostream>
#include <string>
#include <vector>
#include <movies.h>

// Constructor definition
Movies::Movies(std::string list_name) : _list_name {list_name} {}

// Methods definition
int Movies::get_index(const std::string& movie_name) const {
    for (size_t i {0}; i < _movies.size(); i++) {
        if (movie_name == (_movies.at(i))._movie_name) {
            return i;
        }
    }
    return -1;
}

void Movies::add_movie(const std::string& movie_name, const std::string& movie_rating,const unsigned& watch_count) {
    if (get_index(movie_name) != -1)
        std::cout << "ERROR - " <<  movie_name << " already exists in the list. " << std::endl;
    else {
        _movies.push_back( Movie {movie_name, movie_rating, watch_count} );
        std::cout << "OK - " << movie_name << " has been successfully added. " << std::endl;
    }
}

void Movies::increment_watched(const std::string& movie_name) {
    auto idx = get_index(movie_name);
    if (idx != -1) {
        _movies[idx]._watch_count++;
        std::cout << "OK - " << movie_name << " watch count has been incremented successfully. " << std::endl;
    }
    else
        std::cout << "ERROR - " << movie_name << " does not exist in the list. " << std::endl;
}

void Movies::display_movies() const {
    std::cout << std::endl << _list_name << " List" << std::endl;
    std::cout << "=================================================" << std::endl;
    for (size_t i {0}; i < _movies.size(); i++) {
        std::cout << '\'' + (_movies.at(i))._movie_name + '\'' << ", " << (_movies.at(i))._movie_rating << ", " << (_movies.at(i))._watch_count << std::endl;
    }
    std::cout << "=================================================" << std::endl << std::endl;
}

// Destructor
Movies::~Movies() {}