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
	Player(const string& newName, Inventory newInventory, double newMoney);

	void setMoney(double newMoney);

	double getMoney();
private:
    // Basically life points. Once you don't have more money, you lose.
    double money;
    
    };
    
#endif /* defined(____Player__) */
