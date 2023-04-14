#pragma once
#include "Item.h"

class FDrink :  public FItem
{
public:
	FDrink();
	virtual ~FDrink();

	// FItem을(를) 통해 상속됨
	virtual void Use() override;

	virtual void Pour();
};

