#include "Account_dec.h"

int main()
{
    int amount, ch, flag=0,f1=0;
   Account acc,*ptr;
    float deposit_money;
    while(1)
    {
        if(flag==0)
        {
            cout<<"Enter Account Type :-\n1. Savings  2. Current"<<endl;
            cin>>acc.ac_type;
            if(acc.ac_type==1)
            {	 
    					Sav_Acct obj1;
                ptr=&obj1;
                cout<<"Enter your name :";
                cin>>ptr->customer_name;
                f1=0;
            }
            else if(acc.ac_type==2)
            {	
            	Cur_Acct obj2;
                ptr = &obj2;
                cout<<"Enter your name:";
                cin>>ptr->customer_name;
                f1=0;
            }
            else
                {
                    cout<<"There is no Third type"<<endl;
                    f1=1;
                }
        }
        if(f1!=1)
        {
        cout<<"1.Deposit\n2.Withdraw\n3.Get Chequebook\n4.Calculate Interest and change balance \n5.Create otherAccount\n6.Exit"<<endl;
        cin>>ch;
        flag=1;
        
        switch(ch)
        {
            case 1: ptr->deposit();
                    break;
            case 2: ptr->withdrawl();
                    if(acc.ac_type==2)
                        ptr->check_min_balance();
                    break;
            case 3: if(acc.ac_type==1)
                        cout<<"\nChequebook not available for savings account"<<endl;
                    else
                        ptr->get_chequebook();
                    break;
            case 4: if(acc.ac_type==2)
                        cout<<"No interest for current accounts"<<endl;
                    else
                        ptr->calc_interest();
                    break;
            case 5: flag=0;
                    break;
            default:return 0;
        }}
        
    }
    return 0;
}
