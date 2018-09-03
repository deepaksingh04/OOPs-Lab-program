#include "cart.h"

int main ()
{
	CART ct ;
	int c;
	system("clear");
	while(1)
	{	
	
			
	cout <<"\t\t*****SHOPPING CART*****\t\t\n"<< endl;
	cout<<"1.add item\n2.delete item\n3.display list\n4.exit\nEnter your choice : ";
	cin >> c;
		switch (c)
		{
		case 1:
			
			ct.addItem();
			system("clear");
			break;

		case 2:
			ct.removeItem();
			
			break;
		case 3 :
			system("clear");
			ct.displayCart();
			break;
		case 4 :
			
			//ct.displayCart();
			return 0 ;
		default :
			cout << "Invalid Choice !!\n\n";
		}	
	}
	return 0;
}
