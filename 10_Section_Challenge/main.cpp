#include <iostream>
#include <vector>
#include <string>
#include "movies.h"

using namespace std;


int main() {
    
    Movies a {"Methran's"};
    a.add_movie("Big", "PG-13", 2);
    a.add_movie("Star Wars", "PG", 5);
    a.add_movie("Cinderella", "PG", 7);
    a.display_movies();
    
    return 0;
}