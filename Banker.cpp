//Banker.cpp
#include "Banker.h"

Banker::Banker(){
  	setName("John", "Doe");
  	setUName("Teller");
  	setPWD("Teller");
  	setID("0000000");
  	setAccess("2");
}

void Banker::print(){
 	cout<< "User Information\n"
		<< "Full Name: "<< first<< " "<< last<< "\n"
		<< "Username: "<< UName<< "\n"
		<< "ID: "<< id<< "\n"
		<< "Password "<< PWD<< "\n"
		<< "Access Type"<< access<< endl; 
}
