#include<iostream>
#include<cstdlib>
#include<string.h>
#ifndef electricityBill_h
#define electricityBill_h
using namespace std;

class USER
{
	string name;
	float noOfUnits,totalBill;	
	
public:	
	void readDetails();
	void calculateBill();
	void display();
	void check();

};
#endif
