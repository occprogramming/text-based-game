//
//  Area.cpp
//  
//
//  Created by William Smith on 4/24/15.
//
//

#include "area.h"

Area::Area()
{
    // Left intentionally blank. Must use overloaded
}

Area::Area(Dialogue dialogue, Inventory items,
     std::vector<Npc*> people)
{
    this->dialogue = dialogue;
    this->items = items;
    this->people = people;
}

void search(Creature& player)
{
    std::cout << "You find:" << std::endl;
    
    items.print();
    player.inventory.merge(&(items));
    items.clear();
}