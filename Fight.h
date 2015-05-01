//
//  fight.h
//  text_base_game
//
//  Created by Scott Chen on 5/1/15.
//  Copyright (c) 2015 OCCProgramming. All rights reserved.
//

#ifndef text_base_game_fight_h
#define text_base_game_fight_h

#include "dialogue.h"
#include "Player.h"
#include "Bully.h"

#include <iostream>

using namespace std;

class Fight {
public:
    // Dialogue used to ask the player battle choices
    Dialogue dialogue;
    
    // Creatures in combat. creatures[0] is the player
    Creature* creatures[2];
    
    Battle()
    {
    }
    
    Battle(Player * player, Bully * b)
    {
        // Start a battle with the player and another creature
        this->creatures[0] = player;
        this->creatures[1] = b;
        
        // Set up the dialogue. Defending offers no tactical advangtages
        // in this battle system
        this->dialogue = Dialogue("What will you do?",
                                  {
                                      "Run"
                                  });
    }
    
    void activate()
    {
        // The creature with the highest dexterity attacks first, with
        // preference to the player
        
        creature[0]->setMoney(creature[0]->getMoney() - 10);
        cout << "Chazz punked 10 bucks from you!" << endl;
    }
};

#endif
