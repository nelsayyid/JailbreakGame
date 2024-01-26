#pragma once
#define PLAYER_H
#include "Prison.h"
#include <string>
#include <iostream>
#include <chrono>
#include <thread>
#include "Item.h" 

class Player {
	string name;
	int health;
	int INVENTORYSIZE;
	int strengthModifier;
	int exerciseCount;
	int studyCount;
	int intellect;
	int reputation;

	vector<Item> PocketsInventory;

public:

	bool dressedAsGuard;

	Player(string n);
	bool doesPlayerHaveItem(string item);
	bool doesPlayerHaveWepon(string wepon);
	//sneak attack someone to start fight
	//JP3 changed player to pointer argument
	void startFightBySneakAttack(Prison* prison, Player player);
	//JP3 Added addtional function declarator
	void startFightBySneakAttack(Room* room, Player player);
	//3PJ

	//start fight fairly 
	//JP3 changed player to pointer argument
	void startFightFairly(Prison* prison, Player player);
	void PrintInstructions();
	void TakeItem(Prison*, string);
	void TakeItemFromNPC(Prison*, string, string, int);
	void DiscardItem(Prison*, string);
	void PrintInventory();
	void TalkToNPC(Prison*);
	void Trade(Prison*, string);

	bool HasItem(string);

	void Exercise(Prison*);
	void Study(Prison*);
	void CheckTime(Prison*);

	void GiveItemAway(string, string);
	void LoseItemsToGuard(Prison*);

	void InputMenu(Prison*);
	void CheckQuestConditions(Prison*, string);
	void CheckDressAsGuardCondition(Prison*);
	void CheckWinCondition(Prison*);

	void setName(string);
	void setHealth(int);
	void setStrengthModifier(int);
	void setIntellect(int);
	void setReputation(int);

	void resetExerciseCount();
	void resetStudyCount();

	string getName() const;
	int getHealth() const;
	int getStrengthModifier() const;
	int getIntellect() const;
	int getReputationLevel() const;


	//void manipulateItem();
	// 
	//allow user to manipulate items found in inventory
	//JP3 Add prison Object
	void manipulateItem(Prison*);
	//3PJ

	//give player a moves too attack with
	void attack(Prison* prison, NPC* Opp, int f);
	//JP3 Additional function declarator
	void attack(Room* r, NPC* Opp, int temp);
	//3PJ

	//take damage
	void takeDamage(int damage);
};

