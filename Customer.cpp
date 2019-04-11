//Customer.cpp
#include "Customer.h"

Customer::Customer(){
  	setName("John", "Doe");
  	setUName("Teller");
  	setPWD("Teller");
  	setID("0000000");
  	setAccess("1");
}

void Customer::setBalance(double b){
	balance = b;
}
void Customer::setDOB(string d){
	dob = d;
}
void Customer::setAcctType(string a){
	acct = a;
}
void Customer::print(){
 	cout<< "User Information\n"
		<< "Full Name: "<< first<< " "<< last<< "\n"
		<< "Username: "<< UName<< "\n"
		<< "ID: "<< a<< " "<< id<< "\n"
		<< "Password: "<< PWD<< "\n"
		<< "Date of Birth: "<< dob<< "\n"
		<< "Access Type: "<< access<< "\n"
		<< "Balance: "<< balance<< endl; 
}
