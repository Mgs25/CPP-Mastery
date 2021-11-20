#include <iostream>
#include <vector>
#include <string>
//friend keyword
using namespace std;

class Player {
    string _name;
    unsigned _health;
public:
    friend class Battle;
    
    Player(string name_val = "None" , unsigned health_val = 0)
        : _name {name_val}, _health {health_val} {}
    ~Player() {}
};

class Battle {
    string _boss_name;
    unsigned _boss_health;
    unsigned _arena_level;
public:
    Battle(string boss_name = "Default",  unsigned arena_level = 1, unsigned boss_health = 1000)
        : _boss_name {boss_name}, _boss_health {boss_health}, _arena_level {arena_level} {}
    
    void show_battle_info(const Player& player);
    ~Battle() {}
};

void Battle::show_battle_info(const Player& player) {
    string sep;
    for (size_t i {0}; i < player._name.size() + 3; i++)
        sep += ' ';
    cout << "------------------BOSS BATTLE------------------" << endl;
    cout << "FIGHT   :  " << player._name << " vs " << _boss_name << endl;
    cout << "HEALTH  :  " << player._health << sep << _boss_health << endl;
    cout << endl;
}

int main() {
    Player hero {"Fathom", 100};
    Battle final_boss {"Opporus", 99, 500};
    final_boss.show_battle_info(hero);
    
    Player sub_hero {"KIllbill", 80};
    Battle mini_boss {"Cyclops", 65, 240};
    mini_boss.show_battle_info(sub_hero);
    
    Player side_kick {"Falcon", 40};
    Battle weak_boss {"Orcs", 12, 60};
    weak_boss.show_battle_info(side_kick);
    
    return 0;
}