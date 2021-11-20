#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player {
private:
    string name;
    unsigned int health;
public:
    Player(string name_val = "None", unsigned int health_val = 0) : 
        name {name_val},health {health_val} {}
        
    string get_name() const;
    unsigned int get_health() const;
    
    
    void set_name(string s) {name = s;}
    void set_health(unsigned int h) {health = h;}
    
    ~Player() {}
};

unsigned int Player::get_health() const {
    return health;
}

string Player::get_name() const {
    return name;
}

void display_player_name(const Player& source) {
    cout << source.get_name() << endl;
}

void display_player_health(const Player& source) {
    cout << source.get_health() << endl;
}

int main() {
    const Player hero {"Methran", 100};
    
    display_player_name(hero);
    display_player_health(hero);
    
    return 0;
}