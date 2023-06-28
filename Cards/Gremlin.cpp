//
// Created by gigib on 13/06/2022.
//

#include "Gremlin.h"

Gremlin::Gremlin(): Card("Gremlin"){
}

void Gremlin::applyEncounter(Player &player, bool gang_checker) const
{
    if (player.getAttackStrength() >= force)
    {
        if(!gang_checker) {
            printWinBattle(player.getPlayerName(), "Gremlin");
            player.levelUp();
        }
        player.addCoins(coins);
    }
    else
    {
        printLossBattle(player.getPlayerName(),"Gremlin");
        player.damage(damage);
    }
}

void Gremlin::print(std::ostream &os) const {
    printCardDetails(os,m_cardName);
    printMonsterDetails(os, Gremlin::force , Gremlin::damage , Gremlin::coins, false );
    printEndOfCardDetails(os);
}
