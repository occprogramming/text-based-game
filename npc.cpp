//
//  npc.cpp
//  
//
//  Created by Georgy Marrero on 3/31/15.
//
//

#include "npc.h"


Npc::Npc(const string& name, Dialogue dialogue, Inventory inventory)
//inefficient declaration of object in parameters. Forgot how to prevent initial object creation.
{
	this->name = name;
	this->dialogue = dialogue;
}

void Npc::setDialogue(const Dialogue& newDialogue)
{
	dialogue = newDialogue;
}


Dialogue Npc::getDialogue() const
{
	return dialogue;
}

Npc::~Npc(){}