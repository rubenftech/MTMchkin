
#ifndef RUB_GI_HW4_WIZARD_H
#define RUB_GI_HW4_WIZARD_H

#include "Player.h"

class  Healer: public Player{
public:
    void heal(int increase_hp) override ;
    void printInfo(std::ostream&) const override;

    Healer(): Player(){};
    Healer(const std::string& name): Player(name, "Healer"){};
    Healer(const std::string& name, int player_number_i): Player(name, "Healer", player_number_i){};
    Healer & operator=(const Healer& p2 ) = default;
    ~Healer() override = default;
};

#endif //RUB_GI_HW4_WIZARD_H
