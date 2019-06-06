#include"vector-dec.h"

int main()
{
	int x,ele,ch;
	vector<int>v,v2;
	list<int>l;
	cout<<"Number of Elements??"<<endl;
	cin>>x;
	cout<<"Enter "<<x<<" elements: "<<endl;
	while(x--)
	{
		cin>>ele;
		v.push_back(ele);
		l.push_back(ele);
	}
	while(1)
	{
		cout<<"1: Vector Display\n2: List Display\n3: Sorted List\n4:Vector Copy\ndefault: Exit"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1: cout<<"Vector:	     ";
						dispVector(v);
						break;
						
		case 2: cout<<"List:         ";
						dispList(l);
						break;
						
		case 3:	cout<<"Sorted List:  ";
						dispSortedList(l);
						break;

		case 4: Copy(v); break;		

		default: exit(0);
		}
	
	}
	
	
	
	
	
	
	
	return 0;
}
