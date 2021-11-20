#include <string>
#include <iostream>
#include "player.h"

int Player::active_object_count {0}; // Initialize static active object count

// Constructors

Player::Player(std::string name, unsigned health)
    : _name {name}, _health {health} {
        active_object_count++;
}

Player::Player(std::string name)
    : Player {name, 0} {}

Player::Player(unsigned health)
    : Player {"None", health} {}

Player::Player()
    : Player {"None", 0} {}
    
Player::Player(const Player& source)
    : Player {source._name, source._health} {}

// Destructor

Player::~Player() {
    --active_object_count;
}

// Methods

std::string Player::get_name() const {
    return _name;
}

unsigned Player::get_health() const {
    return std::min(static_cast<int>(_health), 100);
}

void Player::get_details() const {
    std::cout << std::endl << "----------------" << get_name() << " data---------------- " << std::endl;
    std::cout << "Name: " << get_name() << std::endl;
    std::cout << "Health: " << get_health() << std::endl << std::endl;
}

int Player::get_active_player_count() {
    return active_object_count;
}


