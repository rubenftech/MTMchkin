//
// Created by gigib on 13/06/2022.
//

#ifndef MATAMHW4_WITCH_H
#define MATAMHW4_WITCH_H

#include "Card.h"

class Witch: public Card{
public:

    void print(std::ostream& out) const override;
    void applyEncounter(Player &player, bool gang_checker) const override;

    Witch();

    Witch(const Witch&) = default;
    Witch& operator=(const Witch& other) = default;
    ~Witch() override = default;

private:
    static const int force=11;
    static const int damage=10;
    static const int coins=2;

};

#endif //MATAMHW4_WITCH_H
