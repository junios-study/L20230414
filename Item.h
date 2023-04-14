#pragma once
class FItem
{
public:
	FItem();
	virtual ~FItem();

	virtual void Use() = 0;
};

