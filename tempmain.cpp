//main.cpp
#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

  
//Function that will take an encrypted string and decrypt it (returns as a string)
string Decrypt(string usernameinput, string passinput)
{
	char key = 'J'; //XOR key encryption
	ifstream is("CustomerInfo.txt"); //opens file
    string str = "Placeholder";
    string decrypted;
    
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
						break;
					case 2:
						cout << "banker menu goes here";
						break;
					case 3:
						cout << "admin menu goes here";
						break;
				}
			}
	}
	}catch(const std::out_of_range& e){ // catches error showing that we reached the end of the file meaning user not found
		cout << "User Not Found\n";
		return "not found";
	}
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
	/*int userauth = 0;
	cout << "Welcome to the banking system!\n"
		 << "Please Login:\n";
	while(1){ //runs loop nonstop
	userauth = verifylogin(); //grabs user info
	}*/
	int choice;
	{
		{
		cout<<"Welcome to the banking system!\n"
			<<"What will you be logging in as: \n"
			<<"1. Customer\n"
			<<"2. Teller\n"
			<<"3. Administrator\n"
			<<"4. Exit\n"
			<<"Enter your choice: ";
		cin >>choice;
			
	switch(choice)
	do
	{
	
	{
		
		case 1:
			cout<<"Thank you for using the Banking Inc.\n"
				<<"What would you like to do today?\n"
				<<"1. Withdraw from my account\n"
				<<"2. Deposit into my account\n"
				<<"3. Exit\n"
				<<"Enter your choice\n";
			cin >>choice;
		switch(choice)
			do
			{
					case 1://to withdraw
						cout<<"How much would you like to withdraw?\n";
						break;
					case 2://to deposit, both options could ask which account
						cout<<"How much would you like to deposit?\n";
						break;
					case 3: 
						cout<<"Goodbye!\n";
						break;
					
			
			}while( choice !=3);
			break;
		
		case 2:
			cout<<"Banker Menu\n"
				<<"1.Enter a new client\n"
				<<"2.Modify an existing client\n"
				<<"3.Exit\n"
				<<"Enter your choice: ";
			cin >>choice;
		switch(choice)
		do
		{
				case 1:
					break;
				case 2:
					break;
				case 3:
					cout<<"Goodbye!\n";
					break;
		}while(choice != 3);	
		break;
	
		case 3:
		cout<<"Administrator Menu\n"
			<<"1. Modify a teller's account\n"
			<<"2. Modify a customer's account\n"
			<<"3. Exit\n"
			<<"Enter your choice\n";
		cin >>choice;
		switch(choice)
		do
		{
				case 1:
					break;
				case 2:
					break;
				case 3: 
					cout<<"Goodbye!\n";
					break;
		}while(choice =!3);
		
		break;
			
		case 4:
			cout<<"Goodbye!\n";
			return 0;
			break;
			
}
	


	
  }while(choice !=4);
  system("PAUSE");

 }

}
}


	

