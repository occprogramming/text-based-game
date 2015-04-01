//
//  npc.h
//  
//
//  Created by Georgy Marrero on 3/31/15.
//
//

#ifndef ____npc__
#define ____npc__

#include "Creature.h"

class Npc : public Creature
{
private:
    inline Npc () {}
    Npc (string name, Dialogue newDialogue);
    
public:
    // Dialogue of the creature.
    Dialogue dialogue;
    
};


#endif /* defined(____npc__) */
