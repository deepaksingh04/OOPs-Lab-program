#include <iostream>
#include <cmath>
#include <unistd.h>
#include <cstdlib>
using namespace std;

typedef struct TERM
{
	int ce,exp;
	TERM():ce(0){}
}terms;


class POLYNOMIAL
{
	int maxExpo;
	terms term[50];
	
public :
	POLYNOMIAL(int a=0):maxExpo(a){}
	
    POLYNOMIAL operator +(POLYNOMIAL);
    POLYNOMIAL operator *(int);
    POLYNOMIAL operator =(POLYNOMIAL);
	friend ostream & operator <<(ostream&,const POLYNOMIAL& );
	friend istream & operator >>(istream&,POLYNOMIAL &);	
	int evaluate(int);


};

