//Admin.cpp
#include "Admin.h"

Admin::Admin(){
  	setName("John", "Doe");
	setUName("Admin");
	setPWD("Administrator");
	setID("0000000");
  	setAccess("3");
}

void Admin::print(){
 	cout<< "User Information\n"
		<< "Full Name: "<< first<< " "<< last<< "\n"
		<< "Username: "<< UName<< "\n"
		<< "ID: "<< id<< "\n"
		<< "Password "<< PWD<< "\n"
		<< "Access Type"<< access<< endl; 
}



void Admin::controlMenu()
{	
	int choice;
		cout<<"Admin Menu\n"
		<<"1. Enter a new client\n"
		<<"2. Modify an existing client\n"
		<<"3. Enter a new employee\n"
		<<"4. Modify an existing employee\n"
		<<"5. Exit\n"
		<<"Enter your choice: ";
		cin >>choice;
	
}



