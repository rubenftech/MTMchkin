//
// Created by gigib on 09/06/2022.
//
#include "Mana.h"
#include "../Players/Healer.h"
static const int MANA_HEAL=10;

Mana::Mana(): Card("Mana"){}

void Mana::applyEncounter(Player &player, bool gang_checker) const {
    Healer* p =dynamic_cast<Healer*>(&player);
    if(p==nullptr){
        printManaMessage(false);
    }
    else{
        player.heal(MANA_HEAL);
        printManaMessage(true);
    }
}