#pragma once
#include "Inventory.h"

class FCharacter
{
public:
	FCharacter();
	virtual ~FCharacter();

	void AddItem(FItem* NewItem);
	FItem* UseItem(int Index);

protected:
	FInventory Inventory;
};

