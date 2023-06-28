//
// Created by gigib on 13/06/2022.
//

#include "Witch.h"


Witch::Witch(): Card("Witch"){}

void Witch::applyEncounter(Player &player, bool gang_checker) const
{
    if (player.getAttackStrength() >= force)
    {
        if(!gang_checker) {
            printWinBattle(player.getPlayerName(), "Witch");
            player.levelUp();
        }
        player.addCoins(coins);
    }
    else
    {
        printLossBattle(player.getPlayerName(),"Witch");
        player.damage(damage);
        player.vampire_decrease_force();
    }
}

void Witch::print(std::ostream &os) const {
    printCardDetails(os,m_cardName);
    printMonsterDetails(os, Witch::force , Witch::damage , Witch::coins, false);
    printEndOfCardDetails(os);
}