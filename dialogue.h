#ifndef DIALOGUE_H
#define DIALOGUE_H

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
	Dialogue::Dialogue(const string& setUp, const string& question, const vector<string>& choices);
    
	// Run the dialogue
	int activate() const;

private:

	// Initial piece of information that the dialogue displays
	string setUp;
    
    // Question
    string question;
    
	// A vector of choices that will be outputted. No numbering is
	// necessary, the dialogue does that automatically
	vector<string> choices;

};


#endif