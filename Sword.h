#pragma once
#include "Item.h"
class FSword : public FItem
{
public:
	FSword();
	virtual ~FSword();

	// FItem��(��) ���� ��ӵ�
	virtual void Use() override;

	virtual void Block();
};

