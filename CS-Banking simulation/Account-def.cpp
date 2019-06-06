#include"Account_dec.h"
int Account::ac_no=10012;
void Account :: deposit()
{
    int amount;
    cout<<"Enter deposit amount(minimum 1000 for current account initially ) :";
    cin>>amount;
    if(amount<0)
        cout<<"You cannot deposit a negative amount."<<endl;
    else
        balance+=amount;
    display();
}

void Account :: withdrawl()
{
    float debit;
    cout<<"Enter the amount you want to withdraw:";
    cin>>debit;
    if(balance<debit)
        cout<<"Not enough balance."<<endl;
    else if(debit<0)
        cout<<"You cannot withdraw a negative amount."<<endl;
    else
        balance-=debit;
        display();
}

void Account :: display()
{
    cout<<"\nAccount no: "<<ac_no<<"  Name: "<<customer_name<<"  Balance: "<<balance<<endl;
}

void Account ::get_chequebook()
{
    cout<<"\nYour chequebook number is "<<ac_no<<endl;
    display();
}

void Sav_Acct:: calc_interest()
{
    interest = balance*(0.06/12);
    cout<<"Enter time period in months: ";
    cin>>months;
    interest=(interest*months);
    cout<<"\nInterest = "<<interest;
    balance+=interest;
    display();
}

void Cur_Acct:: check_min_balance()
{
    if(balance>=1000)
        return;
    else
    {
        penalty=calc_penalty();
        cout<<"Service charge of "<<penalty<<" is imposed for not maintaining minimum balance"<<endl;
        balance-=penalty;
        display();
    }
}

float Cur_Acct ::calc_penalty()
{
    penalty = balance*0.2;
    return penalty;
}


