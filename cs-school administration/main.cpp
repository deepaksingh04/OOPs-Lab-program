#include "school.h"

int main() 
{
	int choice;
	vector<Staff *> teach, regularAd, casualAd, techStaff;
	Staff *ptr;
	while(1) 
	{
		cout<<"\nEnter choice:\n1.Add Teaching Staff\n2.Add Regular Admin\n3.Add Casual Admin\n4.Add Techincal Staff"
			<<"\n5.Display\n6.Exit\n\n";
		cin>>choice;
		switch(choice) 
		{
			case 1: ptr = new Teaching;
					ptr->input();
					teach.push_back(ptr);
					break;

			case 2: ptr = new Regular_Admin;
					ptr->input();
					regularAd.push_back(ptr);
					break;

			case 3: ptr = new Casual_Admin;
					ptr->input();
					casualAd.push_back(ptr);
					break;

			case 4: ptr = new Technical;
					ptr->input();
					techStaff.push_back(ptr);
					break;

			case 5: int i;
					cout<<"\nTeaching Staff: \n";
					for(i=0; i<teach.size(); i++) 
					{
						(teach[i])->display();
						cout<<endl<<endl;
					}
					cout<<"\nRegular Admins: \n";
					for(i=0; i<regularAd.size(); i++) 
					{
						(regularAd[i])->display();
						cout<<endl<<endl;
					}
					cout<<"\nCasual Admins: \n";
					for(i=0; i<casualAd.size(); i++) 
					{
						(casualAd[i])->display();
						cout<<endl<<endl;
					}
					cout<<"\nTechinal Staff: \n";
					for(i=0; i<techStaff.size(); i++) 
					{
						(techStaff[i])->display();
						cout<<endl<<endl;
					}
					break;
			
			default: return(0);
		}
	}
	return(0);
}
