//
//  Creature.h
//  
//
//  Created by Georgy Marrero on 3/31/15.
//
//

#ifndef ____Creature__
#define ____Creature__

#include "inventory.h"
#include "item.h"

class Creature
{
public:
    inline Creature() {}
	Creature(const string& newName, Inventory newInventory);

	void setName(const string& newName);
	void setInventory(const Inventory& newInventory);

	string getName() const;
	Inventory getInventory() const;
    
protected:
    string name;
    Inventory inventory; 
};

#endif /* defined(____Creature__) */
