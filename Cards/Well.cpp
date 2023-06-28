//
// Created by gigib on 09/06/2022.
//
#include "Well.h"
#include "../Players/Ninja.h"
static const int PITFALLS_DAMAGE=10;

Well::Well(): Card("Well"){}

void Well::applyEncounter(Player &player, bool gang_checker) const {
    Ninja* p =dynamic_cast<Ninja*>(&player);
    if(p==nullptr){
        player.damage(PITFALLS_DAMAGE);
        printWellMessage(false);
    }
    else{
        printWellMessage(true);
    }
}

