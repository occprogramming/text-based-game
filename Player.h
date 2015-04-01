//
//  Player.h
//
//
//  Created by Georgy Marrero on 3/31/15.
//
//

#ifndef ____Player__
#define ____Player__

#include "Creature.h"

class Player : public Creature
{
public:
    inline Player() {}
    Player(string name, double money);
                        
private:
    // Basically life points. Once you don't have more money, you lose.
    double money;
    
    // Reputation points. DISABLED FOR THE MOMENT.
    //int popularity;
    
    };
    
#endif /* defined(____Player__) */
