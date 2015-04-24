

#ifndef AREA_H
#define AREA_H

#include "inventory.hpp"
#include "dialogue.hpp"
#include "Npc.h"

#include <vector>

using namespace std;

// Movement is achieved through the use of areas, which are contained
// units of space consisting of an inventory, a list of creatures and
// a dialogue
class Area
{
    
public:

    Area(Dialogue dialogue, Inventory items, vector<Npc*> people);
	

    Area();

    
	// Search the area for items and give them to the searcher, notifying
	// them of their rewards
    void search(Creature& player);
    
private:
    
    // Dialogue is run whenever the area is entered
    Dialogue dialogue;
    
    // Items contained within the area. Not split into individual containers
    // for simplicity
    Inventory items;
    
    
    vector<Npc*> people;
    
};

#endif /* AREA_H */











