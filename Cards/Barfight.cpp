//
// Created by gigib on 09/06/2022.
//
#include "Barfight.h"
#include "../Players/Warrior.h"
static const int BARFFIGHT_DAMAGE=10;

Barfight::Barfight():Card("Barfight"){}

void Barfight::applyEncounter(Player &player, bool gang_checker) const {
    Warrior* p =dynamic_cast<Warrior*>(&player);
    if(p==nullptr){
        player.damage(BARFFIGHT_DAMAGE);
        printBarfightMessage(false);
    }
    else{
        printBarfightMessage(true);
    }
}
