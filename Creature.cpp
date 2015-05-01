//
//  Creature.cpp
//  
//
//  Created by Georgy Marrero on 3/31/15.
//
//

#include "Creature.h"
Creature::Creature(const string& newName, Inventory newInventory)
{
	name = newName;
	inventory = newInventory;
}

void Creature::setName(const string& newName)
{
	name = newName;
}

void Creature::setInventory(const Inventory& newInventory)
{
	inventory = newInventory;
}

string Creature::getName() const
{
	return name;
}

Inventory Creature::getInventory() const
{
	return inventory;
}

