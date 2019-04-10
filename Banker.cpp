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

void Banker::displayMenu()
{
	int userAuth;
	if(userAuth == 2)
	{
		
		int choice;	
		cout<<"Banker Menu\n"
		<<"1.Enter a new client\n"
		<<"2.Modify an existing client\n"
		<<"3.Exit\n"
		<<"Enter your choice: ";
		cin >>choice;
	}
}
