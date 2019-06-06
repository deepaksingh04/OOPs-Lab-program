#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<string.h>
#ifndef stud_h
#define stud_h
using namespace std;

class STUD
{
  	int roll;
	string name;
	int marks[3];
	float avg;
	static int usn;
	void calculateAverage();

public:

STUD()
{	usn=1;
}
void setData();
void displayStudentInfo();	
};
#endif
