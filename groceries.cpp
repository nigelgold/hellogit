//groceries.cpp
#include "groceries.h"

groceries::groceries (string product, float cost)
{
item= product;
price= cost;
}
	void groceries:: setgroceryName (string product)
	{
		item= product;
	}
string groceries:: getgroceryNAme()
	{
	 return item;
	}
void groceries:: setgroceryPrice(float cost)
{
	price= cost;
}

float groceries:: getgroceryPrice()
{
return price;
}
