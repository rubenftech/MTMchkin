//
// Created by gigib on 09/06/2022.
//

#ifndef MATAMHW4_FAIRY_H
#define MATAMHW4_FAIRY_H

#include "../utilities.h"
#include "Card.h"

class  Mana: public Card{
public:

    void applyEncounter(Player &player, bool gang_checker) const override;

    Mana();
    Mana(const Mana&) = default;
    Mana& operator=(const Mana& other) = default;
    ~Mana() override = default;

};



#endif //MATAMHW4_FAIRY_H
