#include <iostream>
#include "Character.h"
#include "Sword.h"
#include "Drink.h"
#include "Bread.h"

using namespace std;

int main()
{
	FCharacter* 석현이 = new FCharacter();

	석현이->AddItem(new FSword());
	석현이->AddItem(new FDrink());
	석현이->AddItem(new FBread());

	for (int i = 0; i < 3; ++i)
	{
		FItem* SelectedItem = 석현이->UseItem(i);

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

	//석현이->UseItem(1)->Use();
	//석현이->UseItem(2)->Use();

	return 0;
}