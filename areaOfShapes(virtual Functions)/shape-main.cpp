#include"shape.h"

int main()
{	while(1)
	{
		system("clear");
	int ch;
	Shape *p;
	CIRCLE ob1;
	RECTANGLE ob2;
	SQUARE ob3;
	cout<<"\n1. CIRCLE\n2. RECTANGLE\n3. SQUARE\nEnter your choice : ";
	cin>>ch;
	
	switch(ch)
	{
		case 1 :
			p=&ob1;
			p->setData();
			p->calculateArea();
			p->display();
			break;
			
		case 2 :
			p=&ob2;
			p->setData();
			p->calculateArea();
			p->display();
			break;
		
		case 3 :
		p=&ob3;
		p->setData();
		p->calculateArea();
		p->display();
			break;
		//case 4 :
		default : "enter correct choice \n";
	
	}
	};
	return 0;
}
