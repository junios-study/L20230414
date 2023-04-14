#include <iostream>
#include "Character.h"
#include "Sword.h"
#include "Drink.h"
#include "Bread.h"

using namespace std;

int main()
{
	FCharacter* ������ = new FCharacter();

	������->AddItem(new FSword());
	������->AddItem(new FDrink());
	������->AddItem(new FBread());

	for (int i = 0; i < 3; ++i)
	{
		FItem* SelectedItem = ������->UseItem(i);

		if (dynamic_cast<FBread*>(SelectedItem))
		{
			dynamic_cast<FBread*>(SelectedItem)->Hit();
		}
		else  if (dynamic_cast<FSword*>(SelectedItem))
		{
			dynamic_cast<FSword*>(SelectedItem)->Block();
		}
		else  if (dynamic_cast<FDrink*>(SelectedItem))
		{
			dynamic_cast<FDrink*>(SelectedItem)->Pour();
		}
	}

	//������->UseItem(1)->Use();
	//������->UseItem(2)->Use();

	return 0;
}