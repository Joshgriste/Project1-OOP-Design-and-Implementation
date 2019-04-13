//main.cpp
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <ctime>
#include <fstream>
#include "Banker.h"
#include "Customer.h"
#include "Admin.h"


using namespace std;
void viewCustomer(Customer Customer[]){
	int id;
	cout<< "What is your id number?"<< endl;
	cin >> id;
	Customer[id].print();
}

void withdraw(Customer Customer[]){
	double amount, bal;
	int id;
	cout<< "What is your id number?"<< endl;
	cin>> id;
	cout<< "How much money would you like to withdraw?"<< endl;
	cin>> amount;
	bal = Customer[id].getBalance();
	bal = bal - amount;
	Customer[id].setBalance(bal);
	cout<< "Your new balance is: "<< bal<< endl;
}
void newClient(Customer Customer[]){
	int i = 0;
	int x = 0;
	string f, l, id, u, p, d;
	while(x = 0){
		d = Customer[i].getDOB();
		if(d == "null"){
			x = 1;
		}else{
			i++;
		}
	
	}
	cout<< "What is the client first and last name?"<< endl;
	cin>> f>> l;
	Customer[i].setName(f, l);
	cout<< "What is the client ID number" << endl;
	cin>> id;
	Customer[i].setID(id);
	cout<< "What is the client username?"<< endl;
	cin>> u;
	Customer[i].setUName(u);
	cout<< "What is the client Password?"<< endl; 
	cin>> p;
	Customer[i].setPWD(p);
	cout<< "What is the client date of birth in mm/dd/yyyy format?"<< endl;
	cin>> d;
	Customer[i].setDOB(d);
	Customer[i].setAccess("1");
	Customer[i].setBalance(0.00);
	cout<< "Customer account created!"<< endl;
}
void editClient(Customer Customer[]){
	int yn,id;
	string f, l, i, u, p, d;
	cout<< "What is the id number of the Customer you would like to edit?";
	cin>> id;
		f = Customer[id].getFName();
		l = Customer[id].getLName();
		i = Customer[id].getID();
		u = Customer[id].getUName();
		p = Customer[id].getPWD();
		d = Customer[id].getDOB();
	cout<< "The client's name is: "<< f<< l<< endl;
	cout<< "If this is ok enter 1. If not, enter 0."<< endl;
	cin>> yn;
	if (yn == 0){
		cout<< "Enter the new client name."<< endl;
		cin>> f>> l;
		Customer[id].setName(f, l);
	}
	cout<< "The client's username is "<< u<< endl;
	cout<< "If this is ok enter 1. If not, enter 0."<< endl;
	cin>> yn;
	if (yn == 0){
		cout<< "Enter the new client username."<< endl;
		cin>> u;
		Customer[id].setUName(u);
	}
	cout<< "The client's password is "<< p<< endl;
	cout<< "If this is ok enter 1. If not, enter 0."<< endl;
	cin>> yn;
	if (yn == 0){
		cout<< "Enter the new client password."<< endl;
		cin>> p;
		Customer[id].setPWD(p);
	}
	cout<< "The client's date of birth is "<< d<< endl;
	cout<< "If this is ok enter 1. If not, enter 0."<< endl;
	cin>> yn;
	if (yn == 0){
		cout<< "Enter the new client password."<< endl;
		cin>> d;
		Customer[id].setDOB(d);
	}
	
}

void newEmployee(Banker Banker[]){
	int i = 0;
	int x = 0;
	while(x = 0){
		if(Banker[i].dob == "null"){
			x = 1;
		}else{
			i++;
		}
	
	}
	cout<< "What is the employee's first and last name?"<< endl;
	cin>> Customer[i].first>> Customer[i].last;
	cout<< "What is the employee's ID number" << endl;
	cin>> Customer[i].id;
	cout<< "What is the employe's username?"<< endl;
	cin>> Customer[i].UName;
	cout<< "What is the employee's Password?"<< endl; 
	cin>> Customer[i].PWD;
	cout<< "What is the employee's date of birth in mm/dd/yyyy format?"<< endl;
	cin>> Customer[i].dob;
}
void editEmployee(Banker Banker[]){
	int id;
	int yn;
	cout<< "What is the id number of the employee you would like to edit?";
	cin>> id;
	cout<< "The employee's name is: "<< Banker[id].first<< Banker[id].last<< endl;
	cout<< "If this is ok enter 1. If not, enter 0."<< endl;
	cin>> yn;
	if (yn == 0){
		cout<< "Enter the new employee name."<< endl;
		cin>> Banker[id].first>> Banker[id].last;
	}
	cout<< "The employee's username is "<< Banker[id].UName<< endl;
	cout<< "If this is ok enter 1. If not, enter 0."<< endl;
	cin>> yn;
	if (yn == 0){
		cout<< "Enter the new client username."<< endl;
		cin>> Banker[id].UName;
	}
	cout<< "The client's password is "<< Customer[id].PWD<< endl;
	cout<< "If this is ok enter 1. If not, enter 0."<< endl;
	cin>> yn;
	if (yn == 0){
		cout<< "Enter the new employee password."<< endl;
		cin>> Banker[id].PWD;
	}
	cout<< "The client's date of birth is "<< Customer[id].dob<< endl;
	cout<< "If this is ok enter 1. If not, enter 0."<< endl;
	cin>> yn;
	if (yn == 0){
		cout<< "Enter the new employee DOB."<< endl;
		cin>> Banker[id].dob;
	}
	
}
  
//Function that will take an encrypted string and decrypt it (returns as a string)
string Decrypt(string usernameinput, string passinput)
{
	int choice, custid;
	char key = 'J'; //XOR key encryption
	ifstream is("AccountLog.txt"); //opens file
    string str = "Placeholder";
    string decrypted;
    Banker bank;
    Customer cust;
    Admin adm;
    Customer myCus[100];
    Admin myAdm[100];
    Banker myBank[100];
    
    int i =0;
       if(!is.is_open()) { //error if file fails to open
     	 perror("Error open");
     	 exit(EXIT_FAILURE);
   		}
   try {
    	while(!is.eof()) { // while not at the end of the file
    		getline(is, str); //grabs the line
    		decrypted = str;	
			for (int i = 0; i < str.size(); i++) //decrypts line from file
				 decrypted[i] = str[i] ^ key;
			auto string name = decrypted.substr(0, decrypted.find(' ')); //grabs names
			auto string token = decrypted.substr(decrypted.find(' ', name.length()) + 1); //break second half of string up
			auto string password = token.substr(0, token.find(' ')); //grabs password
			auto string id = token.substr(token.find(' ', password.length())); //grabs user id
			id = id.substr(1); //removes spaces at front of string
			if (name == usernameinput && password == passinput){ // checks if user input equals the stored info
				cout << "User Logged In!\n";
				int auth;
				istringstream (id) >> auth; //change id from string to int
				switch(auth){ //switch based on ID
					case 1:
						cout << "user menu goes here";
						return "Done";
						break;
					case 2:
						choice = bank.displayMenu();
						while(choice != 3){
							switch(choice){
								case 1:
									newClient(myCus);
									break;
								case 2:
									editClient(myCus);
									break;
								case 3:
									cout<< "Bye!"<< endl;
									break;
							}
						}
						return "Done";
						break;
					case 3:
						choice = adm.controlMenu()
							case 1:
									newClient(myCus[]);
								break;
							case 2:
									cout<<"What is the id for the customer you would like to edit?"<<endl;
									cin >>custid;
									editClient(cust[custid]);
								break;
							case 3:
									newBank(myBank[]);
								break;
							case 4:
									editBank(bank[bankid]);
								break;
							case 5:
								break;
						return "Done";
						break;
				}
			}
	}
	}catch(const std::out_of_range& e){ // catches error showing that we reached the end of the file meaning user not found
		cout << "User Not Found\n";
		return "not found";
	}
}

void toCustomerBalanceLog(string first, string last, string balance)
{
	string toLog;
	string contents, word, filename;
	fstream file;
	filename = "CustomerBalanceLog.txt";
	file.open(filename.cstr());
	while (file >> word)
	{
		contents = contents + "\n" + word;
	}
	ofstream CustomerBalanceLog;
	CustomerBalanceLog.open("CustomerBalanceLog.txt");
	toLog = first + last + balance;
	CustomerBalanceLog << toLog;
	CustomerBalanceLog.close();
	
	CustomerBalanceLog.open("CustomerBalanceLog.txt", iot_base::app);
	CustomerBalanceLog << contents << "\n";

	CustomerBalanceLog.close();
}


int verifylogin()
{ //user enters username and password
	string username;
	string password;
	cout << "Username: ";
	cin >> username;
	cout << "Password: ";
	cin >> password;
	Decrypt(username, password);
	
}

int main()
{
	int userauth = 0;
	cout << "Welcome to the banking system!\n"
		 << "Please Login:\n";
	while(1){ //runs loop nonstop
	userauth = verifylogin(); //grabs user info
	}
}
