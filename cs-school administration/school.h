#include<iostream>
#include<string>
#include<stdlib.h>
#include<vector>
#include<iomanip>
#ifndef school_h
#define school_h

using namespace std;

class Staff 
{
		protected:
			string name;
			string code;
		public:
			virtual void input() = 0;
			virtual void display() = 0;
};

class Education 
{
	protected:
		string highest;
		string professional;
};

class Teaching: public Staff, public Education 
{
	protected:
		string subject;
		string publication;
	public:
		void input(); 
		void display();
};

class Admin: public Staff 
{
	protected:
		string department;
};

class Technical: public Staff, public Education 
{
		char grade;
	public:
		void input();
		void display(); 
};

class Regular_Admin: public Admin 
{
	public:
		void input(); 
		void display();
				
};

class Casual_Admin: public Admin 
{
		int dailyWage;
	public:
		void input(); 
		void display(); 

};

#endif