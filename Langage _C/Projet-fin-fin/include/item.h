#ifndef ITEM_H
#define ITEM_H

#include "weapon.h"
#include "potion.h"
#include "position.h"

typedef enum { WEAPON_TYPE, HEAL_TYPE } ItemType;

typedef struct Item
{
	ItemType type;
	Position * position;

	union {
		Weapon * weapon;
		Potion * potion;
	} item;

	char string[256];

} Item;


//item factory
Item * createSword(int attack, int health);
Item * createPotion(int regen);

#endif