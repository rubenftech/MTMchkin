cmake_minimum_required(VERSION 3.25)
project(MTMchkin)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Cards)
include_directories(Players)

add_executable(MTMchkin
        Cards/BattleCard.h
        Cards/BattleCard.cpp
        Cards/Barfight.cpp
        Cards/Barfight.h
        Cards/Card.cpp
        Cards/Card.h
        Cards/Dragon.cpp
        Cards/Dragon.h
        Cards/Gang.cpp
        Cards/Gang.h
        Cards/Gremlin.cpp
        Cards/Gremlin.h
        Cards/Mana.cpp
        Cards/Mana.h
        Cards/Merchant.cpp
        Cards/Merchant.h
        Cards/Treasure.cpp
        Cards/Treasure.h
        Cards/Well.cpp
        Cards/Well.h
        Cards/Witch.cpp
        Cards/Witch.h

        Players/Healer.cpp
        Players/Healer.h
        Players/Ninja.cpp
        Players/Ninja.h
        Players/Player.cpp
        Players/Player.h
        Players/Warrior.cpp
        Players/Warrior.h
        Exception.h
        main.cpp
        Mtmchkin.cpp
        Mtmchkin.h
        utilities.cpp
        utilities.h
        )
