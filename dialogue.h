#ifndef DIALOGUE.H
#define DIALOGUE.H

#include <string>
#include <vector>
#include <iostream>

using namespace std;
// Gameplay is expressed using dialogues, which present a piece of
// information and some responses, and the ask the user to pick one. If
// they do not pick a valid one then the dialogue loops until they do
class Dialogue
{

public:
	// Default constructor
	Dialogue();
	// Overloaded constructor
	Dialogue(string description, vector<string> choices);
	// Run the dialogue
	int activate();

private:

	// Initial piece of information that the dialogue displays
	string description;
	// A vector of choices that will be outputted. No numbering is
	// necessary, the dialogue does that automatically
	vector<string> choices;

};


#endif