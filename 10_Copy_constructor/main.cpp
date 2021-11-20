#include <iostream>
using namespace std;

class Player {
private:
    string name;
    unsigned int health;
public:
    // constructors
    Player(string name_val = "None", unsigned int health_val = 0);
    Player(const Player &source);
    
    // methods
    string get_name();
    unsigned int get_health();
    
    // destructors
    ~Player() {cout << "Destructor called for " << name << endl;}
};

Player::Player(string name_val, unsigned int health_val)
    : name {name_val}, health {health_val} {
}

Player::Player(const Player &source)
    : Player(source.name, source.health) {
    cout << "Copy constructor called for " << source.name << endl;
}

string Player::get_name() {
    return name;
}

unsigned int Player::get_health() {
    return health;
}

void display_object(Player p) {
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
}

int main() {
    Player methran("Methran");
    display_object(methran);
    
    Player my_new_obj {methran};
    
    cout << my_new_obj.get_name() << endl;
    
    return 0;
}