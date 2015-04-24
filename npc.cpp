//
//  npc.cpp
//  
//
//  Created by Georgy Marrero on 3/31/15.
//
//

#include "npc.h"

Npc::Npc(const string& newName, const string& newType, Dialogue newDialogue, Inventory newInventory) const
{
	name = newName;
	type = newType;
	inventory = newInventory;
	dialogue = newDialogue;
}

void Npc::setName(const string& newName)
{
	name = newName;
}

void Npc::setType(const string& newType)
{
	type = newType;
}

void Npc::setDialogue(const Dialogue& newDialogue)
{
	dialogue = newDialogue;
}

void Npc::setInventory(const Inventory& newInventory)
{
	inventory = newInventory;
}

string Npc::getName()
{
	return name;
}

string Npc::getType()
{
	return type;
}

Dialogue Npc::getDialogue()
{
	return dialogue;
}

Inventory Npc::getInventory()
{
	return inventory;
}
