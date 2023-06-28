//
// Created by Ruben on 08/06/2022.
//

#ifndef UNTITLED_DRAGON_H
#define UNTITLED_DRAGON_H
#include "BattleCard.h"
#define DRAGONFORCE 25
#define DRAGONCOINS 1000
#define DRAGONDAMAGE 0


class Dragon: public BattleCard{
public:


    Dragon();
    Dragon(const Dragon&) = default;
    Dragon& operator=(const Dragon& other) = default;
    ~Dragon() override = default;

};
#endif //UNTITLED_DRAGON_H