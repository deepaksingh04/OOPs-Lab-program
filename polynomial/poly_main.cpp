#include "poly_dec.h"

int main()
{
	POLYNOMIAL ob1,ob2,ob3,ob4,ob5,ob;
	int x,ele,res,ch;

	while(1)
	{
		system("clear");
		cout<<"1: Addition   2: Multiplication   3: Substitute x and get the value   4: Exit\nEnter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1: 
					cout<<"\nEnter 1st polynomial \n";
					cin>>ob1;
					cout<<"\nEnter 2nd polynomial \n";
					cin>>ob2;
					ob3=ob1+ob2;
					cout<<"\nThe result is ";
					cout<<ob3;
					break;
			case 2: 
					cout<<"\nEnter the polynomial \n ";
					cin>>ob4;
					cout<<"\nEnter the number you want to multiply with polynomial: ";
					cin>>ele;
					ob5=ob4*ele;
					cout<<"\nThe result is ";
					cout<<ob5;
					break;
					
			case 3:
					cout<<"\nEnter the polynoimial\n";
					cin>>ob;
					cout<<"\nEnter the value of x : ";
					cin>>x;
					res=ob.evaluate(x);
					cout<<"Value of polynomial : "<<res<<endl;
					break;
					
			default: return 0;						
		}
		sleep(5);
	}
	
	return 0;
}


