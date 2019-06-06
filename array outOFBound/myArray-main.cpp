#include"myArray-dec.h"

int main()
{
	myArray list(5);
	myArray myList(2,13);
	myArray yourList(-5,9);
/*	myArray<int>list(5);
	myArray<int>myList(2,13);
	myArray<int>yourList(-5,9);*/

	

	
	int ch,index;
	while(1)
	{
	cout<<"\n1:list\t2:myList\t3:yourList\t4:\tExit\n";
	cin>>ch;
	switch(ch)
	{
		case 1: cout<<"Elements in list are:	"<<endl;
						for(int i=0;i<5;i++)
							cout<<list[i]<<" ";
						cout<<endl;
						cout<<"Enter the index(between 0&4):\t";
						cin>>index;
						cout<<"Required element is\t"<<list[index]<<endl;
						break;
		case 2: cout<<"Elements in myList are:	"<<endl;
						for(int i=2;i<13;i++)
							cout<<myList[i]<<" ";
						cout<<endl;
						cout<<"Enter the index(between 2&12):\t";
						cin>>index;
						cout<<"Required element is\t"<<myList[index]<<endl;
						break;
		case 3: cout<<"Elements in yourList are:	"<<endl;
						for(int i=-5;i<9;i++)
							cout<<yourList[i]<<" ";
						cout<<endl;
						cout<<"Enter the index(between -5&8):\t";
						cin>>index;
		 				cout<<"Required element is\t"<<yourList[index]<<"\n";
						break;
		case 4: exit(0);
		default: cout<<"INVALID CHOICE!\n"; 
						break;
	
	}
	
	}


	return 0;
}

