#include"temp-def.h"
int main()
{	
	start:
		Queue<int> q1;
    Queue<string> q2;
    Queue<float> q3;
		int ch;
		cout<<"1.integer\n2.string\n3.float\n4.exit\n Enter choice : ";
		 cin>>ch;
		 switch(ch)
		 {
			 case 1 : while(1)
                    {   system("clear");
					 			int c1;
					 			cout<<"**INTEGER Queue **\n\n";
								cout<<"queue : ";
								q1.display();
								cout<<"1.enqueue\n2.dequeue\n3.exit\nenter choice : ";
								cin>>c1;
							switch(c1)
							{
								case 1 : q1.enqueue();
								break;
								case 2 : q1.dequeue();
								break;
								case 3 : goto start;
								break;
								default : cout<<"enter correct choice \n";
			
							}
						};
					break;

			case 2 : while(1)
                    {
                    	system("clear");
							int c2;
							cout<<"**STRING Queue **\n\n";
							cout<<"queue : ";
							q2.display();
							cout<<"1.enqueue\n2.dequeue\n3.exit\nenter choice : ";
							cin>>c2;
							switch(c2)
							{
								case 1 : q2.enqueue();
								break;
								case 2 : q2.dequeue();
								break;
								case 3 : goto start;
								default : cout<<"enter correct choice \n";
							}
						};
							break;
		
			case 3 : while(1)
                    {
                    	system("clear");
							int c3;
							cout<<"**FLOAT Queue **\n\n";
							cout<<"queue : ";
							q3.display();
							cout<<"1.enqueue\n2.dequeue\n3.exit\nenter choice : ";
							cin>>c3;
							switch(c3)
							{
								case 1 : q3.enqueue();
								break;
								case 2 : q3.dequeue();
								break;
								case 3 : goto start;
								default : cout<<"enter correct choice \n";
							}
						};
							break;
				case 4 : return 0;
				default :cout<<"invalid choice ***";
		 }
return 0;
}
