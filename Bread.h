#pragma once
#include "Item.h"
class FBread : public FItem
{
public:
	FBread();
	virtual ~FBread();

	// FItem을(를) 통해 상속됨
	virtual void Use() override;

	virtual void Hit();
};

