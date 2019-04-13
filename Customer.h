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
		double getBalance();
		void setDOB(string);
		string getDOB();
		void setAcctType(string);
		string getAcctType();
		void withdraw();
		void deposit();
		void menu();
		void viewbal();
		void print();
	private:
		double balance;
		string dob;
		string acct;
};
#endif
	
