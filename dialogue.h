#ifndef DIALOGUE_H
#define DIALOGUE_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

enum OutcomeType {
    TEXT, // when only a text will be displayed
    ITEM, // when an item transaction will happen
    NEXTROOM, // when player will enter another room
    FIGHT, // when a bully fight is happening next
    //EVENT, // when something will happen afterwards
    
};

//Outcome outcome1 = Outcome(TEXT, "I know right");

//Outcome(TEXT).setOutcome("");


class Outcome
{
public:
    Outcome();
    
    Outcome(OutcomeType outcomeType); // USE this one for FIGHT and NEXTROOM types
    Outcome(OutcomeType outcomeType, const string& outcomeParameter); // USE this one for TEXT and ITEM types
    
    // Detects the OutcomeType and runs the appropriate function.
    // cout for TEXT, transferItem() for ITEM, goToNextRoom() for NEXTROOM, fight() for FIGHT
    void handleOutcome();
    
    void printType();
    
private:
    
    OutcomeType outcomeType;
    
    
    string outcomeParameter; // this can be a "text to print,"
                            // a "item to transfer,"
                            // a "room name," or

};




// Gameplay is expressed using dialogues, which present a piece of
// information and some responses, and the ask the user to pick one. If
// they do not pick a valid one then the dialogue loops until they do
class Dialogue
{

public:
	// Default constructor
	Dialogue();
    
	// Overloaded constructor
	Dialogue(const string& setUp, const string& question, const vector<string>& choices);
    
    // Runs the dialogue.
    void activate() const;


private:

	// Initial piece of information that the dialogue displays
	string setUp;
    
    // Question
    string question;
    
    // Vector of pair of choice string and outcome class
    vector<pair<string, Outcome>> choicesAndOutcomes;
    
    // A vector of choices that will be outputted. No numbering is
    // necessary, the dialogue does that automatically
    // NEED TO IMPLEMENT choicesAndOutcomes instead
    vector<string> choices;
    
    // PRIVATE FUNCTIONS
    
    // Outputs the setUp and question to the screen, asks the user for a choice, and outputs it.
    int getChoiceFromUser() const;
    
    // Handles the choice the user inputs.
    void handler(int choiceNumber) const;

};


#endif