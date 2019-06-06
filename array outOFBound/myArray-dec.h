#include<iostream>
#include<cstdlib>
#include<exception>
using namespace std;

class myArray
{
	int startIndex,endIndex;
	int *a;
	//x *a;
public:

	myArray(int size)
	{
		startIndex=0;
		endIndex=size-1;
		a= new int[size];
		//a= new x[size];
		
		for(int i=0;i<=endIndex;i++)
		a[i]=i*2;
	
	}
	
	myArray(int start,int end)
	{
		startIndex=start;
		endIndex=end-1;
		int n=endIndex-startIndex+1;
		a=new int[n];
		//a= new x[n];
		
		for(int i=0;i<n;i++)
		a[i]=startIndex+i*2;
	
	}
	
	int operator[](int );
	//x operator[](int );


};


int myArray::operator[](int i)
{
	try
	{
		if(i<startIndex||i>endIndex)
		throw i;
		return a[i-startIndex];
	}
	catch(int i)
	{
		cout<<"INDEX OUT OF BOUND!"<<endl;
		exit(1);		
		
	}
}

