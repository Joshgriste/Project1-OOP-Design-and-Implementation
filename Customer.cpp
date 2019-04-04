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
void Custormer::setAcctType(string at){
	acct = at;
}
void Customer::print(){
 	cout<< "User Information\n"
		<< "Full Name: "<< first<< " "<< last<< "\n"
		<< "Username: "<< UName<< "\n"
		<< "ID: "<< at<< " "<< id<< "\n"
		<< "Password: "<< PWD<< "\n"
		<< "Date of Birth: "<< dob<< "\n"
		<< "Access Type: "<< access<< "\n"
		<< "Balance: "<< balance<< endl; 
}
