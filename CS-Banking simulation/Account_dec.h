#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
class Account
{
    public:
            char customer_name[50];
            static int ac_no;
            int ac_type;
            float balance;
            void deposit();
            void withdrawl();
            void display();
            void get_chequebook();
            virtual void calc_interest(){}
            virtual void check_min_balance(){}
            virtual float calc_penalty(){}
        Account() : balance(0){}
};



class Sav_Acct: public Account
{
    float interest;
    int months;
    public:
            void calc_interest();
            Sav_Acct()
            {
                interest=0;
                ac_no++;
            }
};

class Cur_Acct: public Account
{
    float penalty;
    public:
            void check_min_balance();
            float calc_penalty();
            Cur_Acct()
            {
                ac_no++;
            }
};

