//
//  Player.cpp
//  
//
//  Created by Georgy Marrero on 3/31/15.
//
//

#include "Player.h"
Player::Player(const string& newName, Inventory newInventory, double newMoney)
{
	name = newName;
	money = newMoney;
}

void Player::setMoney(double newMoney)
{
	money = newMoney;
}

double Player::getMoney()
{
	return money;
}