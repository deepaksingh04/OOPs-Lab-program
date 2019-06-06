#include<iostream>
#define pi 3.14
#include<cstdlib>
#ifndef shape_h
#define  shape_h
using namespace std;

class Shape
{
	public:
			float area;
		virtual void setData()=0;
		virtual float calculateArea()=0;
		virtual void display()=0;
};

class CIRCLE:public Shape
{
	public:
		float radius;
		
		 void setData();
		 float calculateArea();
		 void display();
};

class RECTANGLE:public Shape
{
	public:
		float length,breadth;
	

		 void setData();
		 float calculateArea();
		 void display();
};

class SQUARE:public Shape
{
	public:
		float length;
	
		void setData();
		float calculateArea();
		void display();
};


#endif
