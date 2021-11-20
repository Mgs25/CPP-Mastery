#include <iostream>
#include <vector>
#include <string>
#include "movie.h"

// Constructor
Movie::Movie(std::string movie_name, std::string movie_rating, unsigned watch_count)
    : _movie_name {movie_name}, _movie_rating {movie_rating}, _watch_count {watch_count} {
}

Movie::Movie(const Movie& source)
    : Movie(source._movie_name, source._movie_rating, source._watch_count) {
}


// Destructor
Movie::~Movie() {
}