
#include "Ninja.h"

void Ninja::addCoins(int increase_coins){

    Player::addCoins(2*increase_coins);
}

void Ninja::printInfo(std::ostream& os) const {
    Player::printInfo(os);
}
