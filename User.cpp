//User.cpp

#include "User.h"

User::User(){
  	setName("John", "Doe");
	setUName("Default");
	setPWD("Passwd");
	setID("0000000");
  	setAccess("1");
}
void User::setName(string f, string l){
  	first = f;
 	 last = l;
}
void User::setUName(string u){
	UName = r;
}

void User::setPWD(string p){
	PWD = p;
}

void User::setID(string i){
	id = i;
}
void User::setAccess(string a){
  	Access = a; 
}
void User::print(){
	cout<< "User Information\n"
		<< "Full Name: "<< first<< " "<< last<< "\n"
		<< "Username: "<< UName<< "\n"
		<< "ID: "<< id<< "\n"
		<< "Password "<< PWD<< "\n"
		<< "Access Type"<< access<< endl;
}
