//Customer.cpp
#include "Customer.h"

Customer::Customer(){
  	setName("John", "Doe");
  	setUName("Teller");
  	setPWD("Teller");
  	setID("0000000");
  	setAccess("1");
}

void Customer::print(){
 	cout<< "User Information\n"
		<< "Full Name: "<< first<< " "<< last<< "\n"
		<< "Username: "<< UName<< "\n"
		<< "ID: "<< id<< "\n"
		<< "Password "<< PWD<< "\n"
		<< "Access Type"<< access<< endl; 
}
