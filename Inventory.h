#pragma once
#include <vector>

using namespace std;
class FItem;

class FInventory
{
public:
	FInventory();
	virtual ~FInventory();

	void AddItem(FItem* NewItem);
	FItem* GetItem(int Index);

protected:
	vector<FItem*> Items;
};

