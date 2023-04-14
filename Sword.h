#pragma once
#include "Item.h"
class FSword : public FItem
{
public:
	FSword();
	virtual ~FSword();

	// FItem을(를) 통해 상속됨
	virtual void Use() override;

	virtual void Block();
};

