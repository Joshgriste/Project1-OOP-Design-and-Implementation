//Customer.h
#include <iostream>
#include "User.h"
using namespace std;

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer: public User{
	public:
		Customer();
		void setBalance(double);
		void setDOB(string);
		void setAcctType(string);
		void print();
	private:
		double balance;
		string dob;
		string acct;
};
#endif
	
