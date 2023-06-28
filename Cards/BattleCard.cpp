//
// Created by Ruben on 28/06/2023.
//

#include "BattleCard.h"

void BattleCard::print(std::ostream &os) const {
    printCardDetails(os,m_cardName);
    printMonsterDetails(os,BattleCard::force ,BattleCard::damage ,BattleCard::coins , true );
    printEndOfCardDetails(os);
}

BattleCard::BattleCard(const std::string &name, const int force,const int coins, const int damage):
Card(name), force(force), coins(coins), damage(damage) {}
