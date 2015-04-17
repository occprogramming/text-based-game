#ifndef DIALOGUE_CPP
#define DIALOGUE_CPP


// REMOVE THIS AND INCLUDE H FILE
#include <string>
#include <vector>
#include <iostream>
//

// Gameplay is expressed using dialogues, which present a piece of
// information and some responses, and the ask the user to pick one. If
// they do not pick a valid one then the dialogue loops until they do


	// Initial piece of information that the dialogue displays
	//std::string description;

	// A vector of choices that will be outputted. No numbering is
	// necessary, the dialogue does that automatically
	//std::vector<std::string> choices;

	// Run the dialogue

Dialogue::Dialogue() {}


Dialogue::Dialogue(std::string description, std::vector<std::string> choices)
{
    this->description = description;
    this->choices = choices;
}


int Dialogue::activate()
{
    // Output the information
    std::cout << description << std::endl;

    // Output and number the choices
    for(int i = 0; i < this->choices.size(); ++i)
    {
        std::cout << i+1 << ": " << this->choices[i] << std::endl;
    }

    int userInput = -1;

    // Repeatedly read input from stdin until a valid option is
    // chosen
    while(true)
    {
        std::cin >> userInput;
        // 'Valid' means within the range of numbers outputted
        if(userInput >= 0 && userInput <= choices.size())
        {
            return userInput;
        }
    }

    return 0;
}



#endif /* DIALOGUE_CPP */
