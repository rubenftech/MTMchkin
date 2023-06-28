//
// Created by Ruben on 08/06/2022.
//

#ifndef UNTITLED_GREMELIN_H
#define UNTITLED_GREMELIN_H
#include "BattleCard.h"
#define GREMLINFORCE 5
#define GREMLINCOINS 2
#define GREMLINDAMAGE 10

class Gremlin: public BattleCard{
public:


    Gremlin();
    Gremlin(const Gremlin&) = default;
    Gremlin& operator=(const Gremlin& other) = default;
    ~Gremlin() override = default;

};



#endif //UNTITLED_GREMELIN_H