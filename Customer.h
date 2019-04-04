//Customer.h
#include <iostream>
#include "User.h"
using namespace std;

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer: public User{
	public:
		Customer();
		setBalance(double);
		void print();
	private:
		double balance;
};
#endif
	
