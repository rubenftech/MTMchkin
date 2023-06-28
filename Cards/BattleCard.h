//
// Created by Ruben on 28/06/2023.
//

#ifndef BON_EX4_BATTLECARD_H
#define BON_EX4_BATTLECARD_H
#include "Card.h"

class BattleCard: public Card {
public:
    BattleCard() = delete;
    BattleCard(const std::string& name, int force, int coins, int damage);
    BattleCard(const BattleCard&) = default;
    BattleCard& operator=(const BattleCard& other) = delete;
    void print(std::ostream &os) const override;
    virtual ~BattleCard() = default ;

protected:
     const int force;
     const int coins;
     const int damage;
};


#endif //BON_EX4_BATTLECARD_H
