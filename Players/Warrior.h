
#ifndef RUB_GI_HW4_FIGHTER_H
#define RUB_GI_HW4_FIGHTER_H

#include "Player.h"

class  Warrior: public Player{
public:
    int getAttackStrength() const override ;
    void printInfo(std::ostream& os) const override;

    Warrior(): Player(){};
    Warrior(const std::string& name): Player(name, "Warrior"){};
    Warrior(const std::string& name, int player_number_i): Player(name, "Warrior", player_number_i){};
    Warrior & operator=(const Warrior& p2 ) = default;
    ~Warrior() override = default;

};


#endif //RUB_GI_HW4_FIGHTER_H