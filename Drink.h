#pragma once
#include "Item.h"

class FDrink :  public FItem
{
public:
	FDrink();
	virtual ~FDrink();

	// FItem��(��) ���� ��ӵ�
	virtual void Use() override;

	virtual void Pour();
};

