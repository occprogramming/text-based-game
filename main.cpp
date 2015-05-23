/*
The MIT License (MIT)

Copyright (c) 2013 Daniel Mansfield

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <utility>
#include <cstdlib>
#include <ctime>

#include "atlas.hpp"
#include "item.h"
#include "Inventory.h"
#include "Creature.h"
#include "dialogue.h"
#include "area.h"
#include "battle.hpp"

// New character menu
Creature dialogue_newchar();

// Character information menu, displays the items the player has, their
// current stats etc.
void dialogue_menu(Creature& player);

int main(void)
{
    Inventory emptyInventory;
    
    Dialogue mathTeacherDialogue = Dialogue("Math Teacher: You know Georgy... I love math, but there's something about carpentry that really... I don't know how to explain it. When I was a kid, back in the fifties, this huge plank fell from the tree my parents had in the backyard, and...", "Your math professor is telling you his childhood story, what would you like to do?", {"Listen carefully.", "Look at your watch to give him a signal.","Interrupt him and say you have things to do", "Just walk away"});
    
    Npc mathTeacher = Npc("Math Teacher", mathTeacherDialogue, emptyInventory);
    
    mathTeacher.runDialogue();

	return 0;
}
