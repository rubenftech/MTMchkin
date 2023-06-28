//
// Created by Ruben on 08/06/2022.
//

#ifndef UNTITLED_GREMELIN_H
#define UNTITLED_GREMELIN_H
#include "Card.h"


class Gremlin: public Card{
public:

    void print(std::ostream& out) const override;
    void applyEncounter(Player &player, bool gang_checker) const override;

    Gremlin();
    Gremlin(const Gremlin&) = default;
    Gremlin& operator=(const Gremlin& other) = default;
    ~Gremlin() override = default;

private:
    static const int force=5;
    static const int coins=2;
    static const int damage=10;

};



#endif //UNTITLED_GREMELIN_H