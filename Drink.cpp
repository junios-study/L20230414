#include "Drink.h"
#include <iostream>

using namespace std;

FDrink::FDrink()
{
}

FDrink::~FDrink()
{
}

void FDrink::Use()
{
	cout << "음료수를 마신다." << endl;
}

void FDrink::Pour()
{
	cout << "음료수를 석현이한테 먹인다." << endl;
}
