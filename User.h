//User.h
#include <iostream>
using namespace std;

#ifndef USER_H
#define USER_H

class User{
	public:
		User();
		void setUName(string);
		void setPWD(string);
		void setName(string, string);
		void setID(string);
		string getName();
		string getID();
		virtual void print();
	protected:
		string first;
		string last;
		string id;
		string UName;
		string PWD;
		
};

#endif
