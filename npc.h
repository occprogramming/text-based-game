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
    Npc (const string& newName, const string& newType, Dialogue newDialogue, Inventory newInventory);
	void setType(const string& newType);
	void setDialogue(const Dialogue& newDialogue);

	string getType() const;
	Dialogue getDialogue() const;

protected:
    Dialogue dialogue;
	string type;
};


#endif /* defined(____npc__) */
