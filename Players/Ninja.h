
#ifndef RUB_GI_HW4_ROGUE_H
#define RUB_GI_HW4_ROGUE_H

#include "Player.h"

class Ninja: public Player{
public:
    void addCoins(int increase_coins) override;
    void printInfo(std::ostream& os) const override;

    Ninja(): Player(){};
    Ninja(const std::string& name): Player(name, "Ninja"){};
    Ninja(const std::string& name, int player_number_i): Player(name, "Ninja", player_number_i){};
    Ninja & operator=(const Ninja& p2 ) = default;
    ~Ninja() override = default;
};

#endif //RUB_GI_HW4_ROGUE_H