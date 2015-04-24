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
	void setName(const string& newName);
	void setType(const string& newType);
	void setDialogue(const Dialogue& newDialogue);
	void setInventory(const Inventory& newInventory);

	string getName();
	string getType();
	Dialogue getDialogue();
	Inventory getInventory();
	

    
private:
    // Dialogue of the npc.
    Dialogue dialogue;
	//Inventory of the npc
	Inventory inventory;
	//Type of the Npc
	charType type;
	//Name of the npc
	string name;


    
};


#endif /* defined(____npc__) */
