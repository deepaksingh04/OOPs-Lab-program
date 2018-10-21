#include "electricityBill.h"
int main()
{	int ch;
	
	do
	{
system("clear");
	USER x;

	x.readDetails();
	x.calculateBill();
	x.check();
	x.display();
	cout<<"enter any key to continue or *0* to exit"; 
	cin>>ch;

cout<<"\n\n";
	}while(ch!=0);

return 0;
}
