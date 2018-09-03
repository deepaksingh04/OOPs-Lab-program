#include "cart.h"



void ITEM:: getItemDetails()	
{	
	cout<<"enter item-code : ";
	cin>>codeNo;
	cout<<"enter name of product : ";
	cin>>name;
	cout<<"enter price : ";
	cin>>price;
	cout<<"enter quantity : ";
	cin>>quantity;
}



void ITEM :: display()
{	
	/*cout << "Name              : " << name << endl;
	cout << "Item Code         : " << codeNo << endl;
	cout << "Price Per Piece   : " << price << endl;
	cout << "Quantity In Cart  : " << quantity <<endl<<endl;*/
cout<<left<<setw(15)<<"Name"<<left<<setw(20)<<"Item Code "<<left<<setw(20)<<"Price Per Piece"<<left<<setw(20)<<"Quantity In Cart"<<endl;
cout<<left<<setw(15)<<name<<left<<setw(20)<<codeNo<<left<<setw(20)<<price<<left<<setw(20)<<quantity<<endl;	
	
}
void CART :: addItem ()
{	
	ITEM a;
	a.getItemDetails();
	cartList.push_back(a);
}
void CART :: removeItem()
{
	string f;
	cout << "Current Items : \n";
	for (int i = 0; i < cartList.size();i++)
	{
		cout<<"\t" << cartList[i].getName() <<endl;
	}
	cout<< "Which One Do You Want To Remove ? :\n";
	cin>>f;
	for (int i = 0; i < cartList.size();i++)
	{
		if (f==cartList[i].getName())
		{
			cartList.erase(cartList.begin()+i);
			return;
		}	
	}
	cout << "Item Doesn't Exist."<<endl;
	return ;
}
void CART :: displayCart()
{
	cout << "Your Cart Is : "<<endl;
	if (cartList.size() == 0)
	{
	
		cout << "Empty\n";
		return ;
	}
	for (int i = 0;i <cartList.size();i++)
	{
		cartList[i].display();	
	}
	calcBill();
	
	cout << "Total Bill : " << total << endl;
	getchar();
	getchar();
}
void CART :: calcBill()
{
	float temp = 0; 
	for (int i = 0;i<cartList.size();i++)
	{
		
		temp += (cartList[i].getQuantity() * cartList[i].getPrice());	
	}
	total = temp;
}
