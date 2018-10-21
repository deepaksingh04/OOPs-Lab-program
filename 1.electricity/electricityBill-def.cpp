#include "electricityBill.h"
void USER:: readDetails()
{

	cout<<"enter name : ";
	cin>>name;
	cout<<"enter number of units consumed : ";
	cin>>noOfUnits;
}

void USER:: display()
{
	cout<<name<<" consumed : "<<noOfUnits<<" units"<<endl;
	cout<<"your electricity bill sums up to : Rs."<<totalBill<<endl;
}

void USER:: calculateBill()
{
	totalBill=50;

	if((noOfUnits>=0)&&(noOfUnits<=100))
	{
		totalBill=totalBill+1.50*noOfUnits;
	}
	if((noOfUnits>100)&&(noOfUnits<=200))
	{
		totalBill=totalBill+1.80*noOfUnits;
	}
	if(noOfUnits>200)
	{
		totalBill=totalBill+2.50*noOfUnits;
	}

	
}

void USER::check()
{
	if(totalBill>=300.00)
	{
		totalBill = totalBill +0.15*totalBill;
	}
}
