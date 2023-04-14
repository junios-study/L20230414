#include "Character.h"

FCharacter::FCharacter()
{
}

FCharacter::~FCharacter()
{
}

void FCharacter::AddItem(FItem* NewItem)
{
	Inventory.AddItem(NewItem);
}

FItem* FCharacter::UseItem(int Index)
{
	return Inventory.GetItem(Index);
}
