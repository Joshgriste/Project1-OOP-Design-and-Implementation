//Customer.cpp
#include "Customer.h"
#include <bits/stdc++.h>

Customer::Customer(){
  	setName("John", "Doe");
  	setUName("Customer");
  	setPWD("Customer");
  	setID("0000000");
  	setAccess("1");
	setDOB("null");
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
		<< "ID: "<< acct<< " "<< id<< "\n"
		<< "Password: "<< PWD<< "\n"
		<< "Date of Birth: "<< dob<< "\n"
		<< "Access Type: "<< access<< "\n"
		<< "Balance: "<< balance<< endl; 
}
void Customer::withdraw(){
	int money;
	cout << "Please enter the amount you would like to withdraw: ";
	cin >> money;
	if (money > balance){
		cout << "Not enough money!\n";
	}else {
		balance -= money;
		cout << "Money successfully withdrawn!\n";
	}
}
void Customer::deposit(){
	int money;
	cout << "Please enter the amount you would like to deposit: ";
	cin >> money;
	if (money > 0){
		cout << "Money successfully deposited!\n";
		balance += money;
	}else{
		cout << "Invalid amount!\n";
	}
}
void Customer::viewbal(){
	cout << "Balance: " 
		 << balance
		 << "\n";
}
void Customer::menu(){
	int option;
	while(option != 4){
		cout << "Please select an option!\n"
			 << "1. Withdraw\n"
			 << "2. Deposit\n"
			 << "3. View Balance\n"
			 << "4. Exit\n"
			 << "Choice:  ";
		cin >> option;
		switch(option){
			case 1: withdraw();
					break;
			case 2: deposit();
					break;
			case 3: viewbal();
					break;
			case 4: 
					system("CLS");
					cout << "Exiting!!\n";
					break;
			default: cout << "Invalid Option!\n";
					 break;
		}
}
}
