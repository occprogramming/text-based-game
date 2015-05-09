//
//  item.cpp
//  
//
//  Created by Georgy Marrero on 3/31/15.
//
//

#include "item.h"

// Constructor
Item::Item(string newName, string newDescription, ItemType newItemType)
{
    name = newName;
    newDescription = description;
    itemType = newItemType;
}

// Set Item name
void Item::set_Item_Name(const string& newName)
{
	name = newName;
}

// Set Item description
void Item::set_Item_Description(const string& newDescription)
{
	description = newDescription;
}

// Return Item name
string Item::get_Item_Name()
{
	return name;
}

// Return Item description
string Item::get_Item_Description()
{
	return description;
}

bool Item::operator>(const Item& otherItem) const
{
    return (name > otherItem.name);
}

bool Item::operator<(const Item& otherItem) const
{
    return (name < otherItem.name);
}