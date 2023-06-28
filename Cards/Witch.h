//
// Created by gigib on 13/06/2022.
//

#ifndef MATAMHW4_WITCH_H
#define MATAMHW4_WITCH_H

#include "BattleCard.h"
#define WITCHFORCE 11
#define WITCHCOINS 2
#define WITCHDAMAGE 10

class Witch: public BattleCard{
public:

    Witch();
    Witch(const Witch&) = default;
    Witch& operator=(const Witch& other) = default;
    ~Witch() override = default;

};

#endif //MATAMHW4_WITCH_H
