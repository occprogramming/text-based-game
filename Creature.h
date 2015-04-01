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
    inline Creature() { }
    
    // Overloaded Constructor
    Creature (string newName) { name = newName }
    
private:
    // Name of the creature.
    string name;
    
    // Items that the creature posseses.
    Inventory inventory;
    
};

#endif /* defined(____Creature__) */
