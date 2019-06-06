#include "school.h"

void Teaching::input() 
{
   cout<<"Enter the name: ";
   cin>>name;
   cout<<"Enter the Staff Code: ";
   cin>>code;
   cout<<"Enter the subject handled: ";
   cin>>subject;
   cout<<"Enter the publication: ";
   cin>>publication;
   cout<<"Enter the Highest Qualification: ";
   cin>>highest;
   cout<<"Enter the Professional Qualification: ";
   cin>>professional;
}
	
void Teaching::display()
{
  cout<<setw(10)<<left<<"Name: "<<name<<setw(10)<<left<<"Code: "<<code<<setw(10)<<left<<"Subject: "<<subject<<"Publicaition: "<<setw(10)<<left<<publication
		<<"Highest Qualification: "<<setw(10)<<left<<highest<<"Professional Qualification: "<<setw(10)<<left<<professional;
}

void Technical::input()
{
 cout<<"Enter the name: ";
 cin>>name;
 cout<<"Enter the Staff Code: ";
 cin>>code;
 cout<<"Enter the Technical Grade: ";
 cin>>grade;
 cout<<"Enter the Highest Qualification: ";
 cin>>highest;
 cout<<"Enter the Professional Qualification: ";
 cin>>professional;
}

void Technical::display()
{
 cout<<"Name: "<<name<<"\nCode: "<<code<<"\nGrade: "<<grade
 <<"\nHighest Qualification: "<<highest<<"\nProfessional Qualification: "<<professional;
}

void Regular_Admin::input()
{
 cout<<"Enter the name: ";
 cin>>name;
 cout<<"Enter the Staff Code: ";
 cin>>code;
 cout<<"Enter the department: ";
 cin>>department;
}

void Regular_Admin::display() 
{
 cout<<"Name: "<<name<<"\nCode: "<<code<<"\nDepartment: "<<department;
}

void Casual_Admin::input() 
{
 cout<<"Enter the name: ";
 cin>>name;
 cout<<"Enter the Staff Code: ";
 cin>>code;
 cout<<"Enter the department: ";
 cin>>department;
 cout<<"Enter the daily wage: ";
 cin>>dailyWage;
}

void Casual_Admin::display()
{
 cout<<"Name: "<<name<<"\nCode: "<<code<<"\nDepartment: "<<department<<"\nDaily Wage: "<<dailyWage;
}
