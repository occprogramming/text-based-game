//
//  npc.cpp
//  
//
//  Created by Georgy Marrero on 3/31/15.
//
//

#include "npc.h"

Npc::Npc(){}

Npc::Npc(const string& name, const string& type, Dialogue dialogue, Inventory inventory)
//inefficient declaration of object in parameters. Forgot how to prevent initial object creation.
{
	this->name = name;
	this->type = type;
	this->inventory = inventory;
	this->dialogue = dialogue;
}

void Npc::setType(const string& newType)
{
	type = newType;
}

void Npc::setDialogue(const Dialogue& newDialogue)
{
	dialogue = newDialogue;
}

string Npc::getType() const
{
	return type;
}

Dialogue Npc::getDialogue() const
{
	return dialogue;
}