//
//  Inventory.cpp
//  
//
//  Created by Georgy Marrero on 3/31/15.
//
//

#include "Inventory.h"

// Overloaded Constructor
Inventory::Inventory(map<Item, int> newItems)
{
    items = newItems;
}

// Clears the inventory.
void Inventory::clear()
{
    items.clear();
}

// Adds an item to the inventory.
void Inventory::add_item(const Item& item, int count)
{
    // Iterate the inventory until we find the item to add.
    map<Item, int>::iterator it = items.begin();

    bool found = false;
    while (it != items.cend() && !found) {
        if (it->first.name == item.name)
        {
            // Once we find the item, we update the quantity.
            it->second += count;
            found = true;
        }
        it++;
    }

    // If the item doesn't already exist in the inventory, then a
    // pair must be created too
    if (!found)
        items.insert(make_pair(item, count));
}

// Removes an item from the inventory.
void Inventory::remove_item(const Item& item, int count)
{
    // Iterate through the items, and if they are found then decrease
    // the quantity by the quantity removed
    map<Item, int>::iterator it = items.begin();
    while (it != items.cend()) {
        if (it->first.name == item.name)
        {
            // Once we find the item, we update the quantity.
            it->second -= count;
        }

        //remove the item key if count is zero.
        if (it->second == 0) {
            it = items.erase(it);
        }
        it++;
    }
}

// Adds all items from another inventory.
void Inventory::merge(const Inventory& inventory)
{
    // Check if we're merging to the same inventory
    if(&inventory != this)
    {
        // Loop through the items to be added, and add them. Our addition
        // function will take care of everything else for us
        map<Item, int>::const_iterator it = inventory.items.cbegin();
        while (it != inventory.items.cend()) {
            add_item(it->first, it->second);
            ++it;
        }
    }
}

// Print the entire inventory. If it's empty, prints "Nothing."
void Inventory::print(bool label)
{
    
    if (items.size() == 0)
        cout << "Nothing" << endl;
    else
    {
        unsigned int i = 1;

        map<Item, int>::const_iterator it = items.cbegin();
        while (it != items.cend()) {
            // Number the items if asked
            if (label) cout << i++ << ": ";
            // Output the item name, quantity and description, e.g.
            // Gold Piece (29) - Glimmering discs of wealth
            cout << it->first.name << " (" << it->second << ") - ";
            cout << it->first.description << endl;
            it++;
        }
    }
}
