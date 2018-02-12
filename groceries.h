//groceries.h
#ifndef groceries_H
#define groceries_H
#include <string>
using namespace std;

class groceries {
private:
string item;
float price;

public:
groceries (string product, float cost);
groceries ();
void setgroceryName(string product);
string getgroceryName();
void setgroceryPrice(float cost);
float getgroceryPrice();
};
#endif
