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
