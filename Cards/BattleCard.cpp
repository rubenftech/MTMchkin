//
// Created by Ruben on 28/06/2023.
//

#include "BattleCard.h"


void BattleCard::print(std::ostream &os) const {
    printCardDetails(os,m_cardName);
    bool isDragon = (m_cardName == "Dragon");
    printMonsterDetails(os,BattleCard::force ,BattleCard::damage ,BattleCard::coins , isDragon );
    printEndOfCardDetails(os);
}

BattleCard::BattleCard(const std::string &name, const int force,const int coins, const int damage):
Card(name), force(force), coins(coins), damage(damage) {}

void BattleCard::applyEncounter(Player &player, bool gang_checker) const{
    if (player.getAttackStrength() >= force){
        if(!gang_checker) {
            printWinBattle(player.getPlayerName(), m_cardName);
            player.levelUp();
        }
        player.addCoins(coins);
    }
    else{
        printLossBattle(player.getPlayerName(),m_cardName);
        if (this->m_cardName == "Dragon"){
            player.setPlayerHPToZero();
            return;
        }
        player.damage(damage);
        if (this->m_cardName == "Witch"){
            player.witch_decrease_force();
        }
    }
}
