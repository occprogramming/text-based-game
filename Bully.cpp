//
//  Bully.cpp
//  
//
//  Created by Georgy Marrero on 3/31/15.
//
//

#include "Bully.h"


// function: takeMoney

Bully::Bully()
{
    // nothing to do
}

Bully::Bully(const string& newName, const string& newType, Dialogue newDialogue, Inventory newInventory)
: Npc(newName, newType, newDialogue, newInventory)
{
    // nothing to do
}