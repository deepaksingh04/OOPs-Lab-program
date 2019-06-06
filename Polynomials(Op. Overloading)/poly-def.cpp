#include"poly.h"

/*istream& operator>>(istream& in,POLYNOMIAL &ob)
{
    cout<<"enter the maximum exponent : ";
    in>>ob.maxTerm;
    for(int i=0;i<=ob.maxTerm;i++)
    {
        cout<<"enter the coefficient of x^"<<i<<" : ";
        in>>ob.p[i].coef;
        ob.p[i].expo=i;
    }
return in;
}*/
istream & operator >>(istream &in,POLYNOMIAL &ob)
{
	cout<<"Enter the maximum exponent : ";
	in>>ob.maxTerm;

	int i;
	for(i=ob.maxTerm;i>=0;i--)
	{
		cout<<"Coefficient of x^"<<i<<" : ";
		in>>ob.p[i].coef;
		ob.p[i].expo=i;
	}
	return in;
}



POLYNOMIAL POLYNOMIAL::operator =(POLYNOMIAL ob)
{
	maxTerm=ob.maxTerm;
	for(int i=0;i<=maxTerm;i++)
	{
		p[i].coef=ob.p[i].coef;
		p[i].expo=i;
	}
	return *this;
}


/*ostream& operator<<(ostream& out,const POLYNOMIAL &ob)
{   int i;
    out<<"The Polynomial is : ";
    for(i=ob.maxTerm;i>0;i--)
    {   if(ob.p[i].coef!=0)
        out<<ob.p[i].coef<<"x^"<<ob.p[i].expo<<"+";
    }
    out<<ob.p[i].coef;
return out;
}*/
ostream & operator <<(ostream &out,const POLYNOMIAL &ob)
{
	int i;
	i=ob.maxTerm;
	out<<"The polynomial : ";
	for(;i>0;i--)
	{
		if(ob.p[i].coef!=0)
			out<<ob.p[i].coef<<"x^"<<ob.p[i].expo<<" + ";
	}
	out<<ob.p[i].coef<<endl;
	return out;
}




POLYNOMIAL POLYNOMIAL:: operator+(POLYNOMIAL ob2)
{
   int max;
   max=(maxTerm>ob2.maxTerm)?maxTerm:ob2.maxTerm;
   POLYNOMIAL ob3(max);
   for(int i=max;i>=0;i++)
   {
       ob3.p[i].coef=p[i].coef+ob2.p[i].coef;
       ob3.p[i].expo=i;
   }
return  ob3;
}