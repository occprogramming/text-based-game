//
//  item.h
//  
//
//  Created by Georgy Marrero on 3/31/15.
//
//

#ifndef ____item__
#define ____item__

#include <string>

using namespace std;

class Item
{
    
public:
    
    // Types of items
    enum ItemType {
        ACTIONABLE, // Item that once it's used, it disappears.
        
        CONSUMABLE, // Item that enhances player's chances of something.
        
        TOKEN,      // Item that allows certain action/ possibility to
                    // happen. It may allow you to continue to the next
                    // level, get a special item, or start a puzzle.
                    // Note: This type of item stays with you for the
                    // rest of the game.
    };

    // Name of the item. Example: "Math Notebook."
    string name;
    
    // Description of the item. Example: "Personal notebook with over
    // 50 algebra problems and solutions."
    string description;
    
    // Type of item. Example: ACTIONABLE.
    ItemType itemType;

    // Constructor
    Item(string newName, string newDescription, ItemType newItemType);

	// Set Item name
	void set_Item_Name(const string& name);

	// Set Item description
	void set_Item_Description(const string& name);

	// Return Item name
	string get_Item_Name();

	// Return Item description
	string get_Item_Description();

    bool operator>(const Item&) const;
    bool operator<(const Item&) const;


    
};

#endif /* defined(____item__) */
