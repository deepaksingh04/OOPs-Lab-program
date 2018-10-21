#include"shape.h"

void CIRCLE::setData()
{
	cout<<"enter the radius : ";
	cin>>radius;
	area=calculateArea();
}


float CIRCLE::calculateArea()
{
	return pi*radius*radius;
}

void CIRCLE::display()
{
	cout<<"the area of circle is : "<<area;
}


void RECTANGLE::setData()
{
	cout<<"enter the length : ";
	cin>>length;
	cout<<"enter the breadth : ";
	cin>>breadth;
	area=calculateArea();
}


float RECTANGLE::calculateArea()
{
	return length*breadth;
}

void RECTANGLE::display()
{
	cout<<"the rectangle is : "<<area;
}


void SQUARE::setData()
{
	cout<<"enter the length : ";
	cin>>length;
	area=calculateArea();
}



float SQUARE::calculateArea()
{
	return length*length;
}

void SQUARE::display()
{
	cout<<"the square is : "<<area;
}






