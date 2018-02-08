//groceries.h
#ifndef groceries_H
#define groceries_H

class groceries {
private:
string item;
float price;

public:
groceries (string product, float cost);
void setgroceryName(string product);
string getgroceryName();
void setgroceryPrice(float cost);
float getgroceryPrice();
};
#endif
