#ifndef cart_h
#define cart_h
#include <iostream>
#include <vector>
#include <string>
#include<stdio.h>
#include <stdlib.h>
#include<iomanip>
using namespace std ;

class ITEM 
{
private :
	int quantity ;
	int codeNo;
	string name ;
	float price ;
public :
	
	string getName() {return name ;}
	int getQuantity() {return quantity; }
	float getPrice () {return price;};
	void display();
	void getItemDetails();
	
};

class CART
{
private:
	vector <ITEM> cartList;
	float total;
	void calcBill();
public :
	CART() 
	{
		total=0;
	}
	void addItem();
	void displayCart();
	void removeItem();
};
#endif
