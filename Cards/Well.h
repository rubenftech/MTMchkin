//
// Created by gigib on 09/06/2022.
//

#ifndef MATAMHW4_WELL_H
#define MATAMHW4_WELL_H

#include "../utilities.h"
#include "Card.h"

class  Well: public Card{
public:

    void applyEncounter(Player &player, bool gang_checker) const override;

    Well();
    Well(const Well&) = default;
    Well& operator=(const Well& other) = default;
    ~Well() override = default;

};


#endif //MATAMHW4_WELL_H
