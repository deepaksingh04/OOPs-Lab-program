#include"poly.h"

int main()
{
    POLYNOMIAL p1,p2,p3;

    cout<<"enter first polynomial\n";
    cin>>p1;
    cout<<"Enter second POlynomial\n";
    cin>>p2;
    p3=p1+p2;
    cout<<"result : ";
    cout<<p3;

    int c,no;
    /*cout<<"1.addition of polynomial\n\n2.multiply polynomial with integer\nenter the choice : ";
    cin>>c;

    switch(c)
    {
        case 1 : 
        cout<<"enter the first polynomial : ";
        cin>>p1;
        cout<<"enter the second polynomial : ";
        cin>>p2;
        p3=p1+p2;
        cout<<"the final polynomial : "<<p3;
        break;
        /*case 2 :
        cout<<"enter integer to be multiplied with : ";
        cin>>no;
        p3=p1*no;
        cout<<p3;
        break;
    }*/
return 0;
}