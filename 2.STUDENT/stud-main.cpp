#include"stud.h"

int STUD::usn=1;

int main()
{	int n,p,query;
	system("clear");
	STUD s[3];
	cout<<"enter number of students to input details : ";
	cin>>n;
	for(int i=0;i<=n-1;i++)
	{
		s[i].setData();		
	}
	cout<<"enter roll number to get student details : ";
	cin>>p;

	s[p-1].displayStudentInfo();
return 0;}
