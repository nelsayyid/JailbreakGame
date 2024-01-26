#include "NPC.h"



//getter functions for name and description
string NPC::getName() const {
    return name;
}
string NPC::getDescription() const {
    return description;
}
string NPC::getID() const {
    return ID;
}

string NPC::generateDialogue()
{
    //generic dialogue for just fork - will add/diversify future dialogues and responses
    string dialogue[] = { "Hey Cellie, what you up to?","What's up, Cellie?", "You need something, Cellie?", "Sup, Cellie?", "How's it hanging, Cellie?" };
    srand(time(NULL));
    int arraySize = sizeof(dialogue) / sizeof(dialogue[0]);
    int choice = rand() % arraySize;
    string dialogueSep = "\n============================================\n";
    cout << dialogueSep;
    return dialogue[choice] + dialogueSep;

}

//greeting for npcs
string NPC::getGreeting() {
    int size = greetings.size();
    int choice = rand() % size;
    string dialogueSep = "\n============================================\n";
    cout << dialogueSep;
    return greetings[choice] + dialogueSep;
}

//JP3: No return value, faking one.
string NPC::getWeponName()
{
    cout << "[JP3] Error in NPC:getWeponName(). See header file." << endl;
    //defined in enemy.cpp
    return "[JP3] Error in NPC:getWeponName(). See header file.";
}
//3PJ

void NPC::attack(NPC* e, int number)
{
    //defined in enemy.cpp
}
//JP3 Disabling, see header file
/*
void NPC::dropLoot(Prison* prison, NPC* e)
{
    //defined in enemy.cpp
}
*/
//3PJ

//JP3: No return value, faking one.
int NPC::getStrength()
{
    //defined in enemy.cpp
    //If you decide to fight a regular npc, this is all their base stats
    return 4;
}
//3PJ

//JP3 Disabling, see header file.
/*
void NPC::droploot(Prison* prison, NPC* e)
{
    //defined in enemy.cpp
}
*/
//3PJ

//JP3: No return value, faking one.
int NPC::getHealth()
{
    //defined in enemy.cpp

    return health;
}
//3PJ


void NPC::takeDamage(int damage)
{
    //defined in enemy.cpp
    health -= damage;
    if (health < 0)
        health = 0;
}
//3PJ

Item NPC::dropLoot()
{
    Item Item("", "", "");
    //defined in enemy.cpp
    return Item;
} 

void NPC::PrintTradeTable() {

}

//virtual methods for traders, enemies, guards, and questgivers
bool NPC::SearchForTradeItem(string itemName) {
    return false;
}

string NPC::ItemToGiveToTrader(string itemName) {
    return "";
}

Item NPC::getItemFromTrader(string itemName) {
    return Item();
}

void NPC::DeleteTradeItem(string itemName) {

}

void NPC::RefreshTable() {

}

string NPC::FightDialogue() {
    return "";
}

int NPC::getSuspicionLevel() {
    return 1;
}

int NPC::Confront(int playerIntellect, int playerReputation) {
    return 0;
}

void NPC::IncrementQuestPosition() {

}

void NPC::setQuestPosition(int) {

}

int NPC::getQuestPosition() {
    return 0;
} 