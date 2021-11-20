#include <iostream>
#include <vector>
#include <string>
#include "player.h"

int main() {
    Player A {"A", 1000};
    A.get_details();
    
    
    Player B {"B", 94};
    B.get_details();
    
    
    Player C {"C", 98};
    C.get_details();
    
    Player D {"D", 92};
    D.get_details();
    
    Player *enemy {nullptr};
    enemy = new Player {A};
    enemy->get_details();
    
    std::cout << "Number of active player objects: " << Player::get_active_player_count() << std::endl;
    
    delete enemy;
    
    std::cout << "Number of active player objects: " << Player::get_active_player_count() << std::endl;
    
    
    return 0;
}