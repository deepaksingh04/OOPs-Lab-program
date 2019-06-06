#include "poly_dec.h"

POLYNOMIAL POLYNOMIAL::operator +(POLYNOMIAL ob2)
 {
 	int i,max;
 	max=(maxExpo>ob2.maxExpo)?maxExpo:ob2.maxExpo;
 	POLYNOMIAL ob3(max);
 	for(i=max;i>=0;i--)
 	{
 		ob3.term[i].ce= term[i].ce+ob2.term[i].ce;
 		ob3.term[i].exp=i;
	}
	return ob3;
}

POLYNOMIAL POLYNOMIAL::operator *(int num)
{
	POLYNOMIAL ob1;
	ob1.maxExpo=maxExpo;
	int i;
	for(i=0;i<=maxExpo;i++)
	{
		ob1.term[i].ce=term[i].ce * num;
		ob1.term[i].exp=i;
	}
	return ob1;
}

POLYNOMIAL POLYNOMIAL::operator =(POLYNOMIAL ob)
{
	maxExpo=ob.maxExpo;
	for(int i=0;i<=maxExpo;i++)
	{
		term[i].ce=ob.term[i].ce;
		term[i].exp=i;
	}
	return *this;
}

ostream & operator <<(ostream &out,const POLYNOMIAL &ob)
{
	int i;
	i=ob.maxExpo;
	out<<"The polynomial : ";
	for(;i>0;i--)
	{
		if(ob.term[i].ce!=0)
			out<<ob.term[i].ce<<"x^"<<ob.term[i].exp<<" + ";
	}
	out<<ob.term[i].ce<<endl;
	return out;
}

istream & operator >>(istream &in,POLYNOMIAL &ob)
{
	cout<<"Enter the maximum exponent : ";
	in>>ob.maxExpo;

	int i;
	for(i=ob.maxExpo;i>=0;i--)
	{
		cout<<"Coefficient of x^"<<i<<" : ";
		in>>ob.term[i].ce;
		ob.term[i].exp=i;
	}
	return in;
}

int POLYNOMIAL::evaluate(int x)
{
	int res=0;
	int i;
	for(i=maxExpo;i>=0;i--)
		res+=term[i].ce*pow(x,i);
	
	return res;
}

