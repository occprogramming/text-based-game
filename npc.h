//
//  npc.h
//  
//
//  Created by Georgy Marrero on 3/31/15.
//
//

#ifndef ____npc__
#define ____npc__

#include "Creature.h"
#include "dialogue.h"

class Npc : public Creature
{
public:
    inline Npc () {}
    Npc (const string& newName, Dialogue newDialogue, Inventory newInventory);
	void setDialogue(const Dialogue& newDialogue);

	Dialogue getDialogue() const;

protected:
    Dialogue dialogue;
};


#endif /* defined(____npc__) */
