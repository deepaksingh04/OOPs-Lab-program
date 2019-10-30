#include <iostream>
#include<stdlib.h>
using namespace std;
#define size 5
template <class T>
class Queue 
{
    T a[size];
    int f;
    int r;
    public:
        Queue()
        {       
	   	 f=0;
	   	 r=-1;
        }	
        bool isEmpty();
        bool isFull();
        void display();
        void enqueue();
        T dequeue();
};

template <class T>
bool Queue<T>::isEmpty()
{
	if(f>r)
		return true;
    return false;
}

template <class T>
bool Queue<T>::isFull()
{
	if(f==0&&r==size-1)
		return true;
	else
		return false;
}

template <class T>
void Queue<T>::display()
{	int i;
	if(isEmpty())
	{
		cout<<"queue empty\n";
		return;
	}
	 if(isFull())
		cout<<"queue full\n";
	for(i=f;i<=r;i++)
		cout<<a[i]<<" ";	
	cout<<"\n";
}


template <class T>
void Queue<T>::enqueue()
{
	T ele;
	if(isFull())
	{
		cout<<"queue full\n";
		return ;
	}			
	cout<<"enter the element to be inserted : ";
	cin>>ele;
	a[++r]=ele;
}
// template based queue
template <class T>
T Queue<T>::dequeue()
{	T x;
	int i;
	if(isEmpty())
	{
		cout<<"queue empty\n";
		return 0;
	}
	else
	{
		x=a[f];
		for(i=0;i<r;i++)
		{
			a[i]=a[i+1];
		}
		r--;
	}
	return x;
}
	

