#include"stud.h"

void STUD::setData()
{	
	cout<<"Enter name : ";
	cin>>name;
	
	roll=usn++;
	
		cout<<"\nEnter marks in 3 subjects : ";
	for(int i=0;i<=2;i++)
	{
		cin>>marks[i];
	}
calculateAverage();
}

void STUD::calculateAverage()
{
	float s=0;
	sort(marks,marks+3);
	s=(marks[1]+marks[2]);
	
	avg=s/2;
}

void	STUD:: displayStudentInfo()
{	
cout<<"\n\nSTUDENT DETAILS :: \n\n";
cout<<"Name : "<<name<<endl;
cout<<"Roll No. : "<<roll<<endl;
cout<<"Average Marks Obtained (best of 2 out of 3) : "<<avg<<endl;



	
}
