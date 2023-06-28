//
// Created by gigib on 12/06/2022.
//

#include "Dragon.h"


Dragon::Dragon():BattleCard("Dragon",DRAGONFORCE, DRAGONCOINS,DRAGONDAMAGE ){}


void Dragon::applyEncounter(Player &player, bool gang_checker) const{
    if (player.getAttackStrength() >= force){
        if(!gang_checker) {
            printWinBattle(player.getPlayerName(), "Dragon");
            player.levelUp();
        }
        player.addCoins(coins);
    }
    else{
        player.setPlayerHPToZero();
        printLossBattle(player.getPlayerName(),"Dragon");
    }
}
