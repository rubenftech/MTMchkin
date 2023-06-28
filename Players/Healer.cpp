#include "Healer.h"

void Healer::heal(int increase_hp) {
    Player::heal(2*increase_hp);
}

void Healer::printInfo(std::ostream& os) const {
    Player::printInfo(os);
}
