#include "rogue.h"
#include "item.h"
#include "weapon.h"
#include "potion.h"

Item * createSword(int attack, int health) 
{
	Item * item = malloc(sizeof(Item));
	item ->type = WEAPON_TYPE;
	strcpy(item -> string, "Sword");


	Weapon * weapon = malloc(sizeof(Weapon));
	weapon -> attack = attack;
	weapon -> health = health;

	item->item.weapon = weapon;

	return item;

}

Item * createPotion(int regen) 
{
	Item * item = malloc(sizeof(Item));
	item ->type = POTION_TYPE;
	strcpy(item -> string, "Potion");


	Potion * potion = malloc(sizeof(Potion));
	potion -> regen= regen;

	item->item.potion = potion;

	return item;

}