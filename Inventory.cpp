#include "Inventory.h"

FInventory::FInventory()
{
}

FInventory::~FInventory()
{
}

void FInventory::AddItem(FItem* NewItem)
{
	Items.push_back(NewItem);
}

FItem* FInventory::GetItem(int Index)
{
	return Items[Index];
}
