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
		/*access type set to ATM by default in .cpp file
		Access types:
			Audit - can change account information and add users
			Teller - can move money to/from accounts
			ATM - can withdraw money and view account info
		*/
		void setAccess(string);
		string getName();
		string getID();
		virtual void print();
	protected:
		string first;
		string last;
		string id;
		string UName;
		string PWD;
		string access;
		
};

#endif
