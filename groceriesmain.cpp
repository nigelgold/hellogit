#include <iostream>
#include <vector>
#include <string>
#include "groceries.h" 
using namespace std;

int main()
{
groceries stock;
string name;
float dues;

vector<groceries>myvector;

for (int c=0; c<3; c++)
{
cout << "Please enter name and price";
cin >> name;
cin >> dues;
stock.setgroceryName(name);
stock.setgroceryPrice(dues);
myvector.push_back (stock);
}
	for (int x=0; x< myvector.size(); x++)
	{
	 cout << myvector[x].getgroceryName() << " " << myvector[x].getgroceryPrice() << endl;
	}
		cout << "Above are the 4 products and prices";
return 0;
}

