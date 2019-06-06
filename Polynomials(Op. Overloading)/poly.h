#include<iostream>
using namespace std;

struct poly
{
    int coef;
    int expo;
};

class POLYNOMIAL
{   int maxTerm;
    poly p[50];
    public:
    POLYNOMIAL(int a=0):maxTerm(a){}
    POLYNOMIAL operator +(POLYNOMIAL);
    POLYNOMIAL operator =(POLYNOMIAL);
   // POLYNOMIAL operator*(int);
    friend istream& operator >>(istream&, POLYNOMIAL&);
    friend ostream& operator <<(ostream&, const POLYNOMIAL&);

};

