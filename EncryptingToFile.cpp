//EncryptingToFile.cpp
#include<iostream>
#include<fstream>
using namespace std;

//Function that takes a string and returns an encrypted string
string Encrypt(string toEncrypt) 
{
	char key = 'j';
	string encrypted = toEncrypt;
	for (int i = 0; i < toEncrypt.size(); i++)
        encrypted[i] = toEncrypt[i] ^ key;
    
	return encrypted;
}

//Function that will take an encrypted string and decrypt it (returns as a string)
string Decrypt(string toDecrypt)
{
	char key = 'j';
	string decrypted = toDecrypt;
	for (int i = 0; i < toDecrypt.size(); i++)
		decrypted[i] = toDecrypt[i] ^ key;
	
	return decrypted;
}

//Function that will take customer variables, encrypt it using encrypt function, and write to "CustomerInfo.txt"
void toCustomers(string first, string last, string id, string dob)
{
	string toLog;
	ofstream CustomerLog;
	CustomerLog.open("CustomerInfo.txt", fstream::app);
	toLog = Encrypt(first) + Encrypt(" ") + Encrypt(last) + Encrypt(" ") + Encrypt(id) + Encrypt(" ") + Encrypt(dob);
	CustomerLog << toLog << "\n";
	CustomerLog << Decrypt(toLog) << "\n";
	
	CustomerLog.close();
}

//function that will take username, password, and authlevel and add to log file
void toAccountLog(string username, string password, string authlevel)
{
	string toLog;
	ofstream AccountLog;
	AccountLog.open("AccountLog.txt", fstream::app);
	toLog = Encrypt(username) + Encrypt(" ")+ Encrypt(password)+Encrypt(" ")+Encrypt(authlevel);
	AccountLog << toLog << "\n";
	AccountLog << Decrypt(toLog) << "\n";
	
	AccountLog.close();
	
}

//function that will log transactions
void toTransactionLog(string username, string id, string accountType, string transactionType, string oldBalance, string math, string newBalance)
{
	string toLog;
	ofstream TransactionLog;
	TransactionLog.open("TransactionLog.txt", fstream::app);
	toLog = Encrypt(username)+Encrypt(" ")+Encrypt(id)+Encrypt(" ")+Encrypt(accountType)+Encrypt(" ")+Encrypt(transactionType)+Encrypt(" ")+Encrypt(oldBalance)+Encrypt(" ")+math+Encrypt(" ")+newBalance;
	TransactionLog << toLog << "\n";
	
	TransactionLog.close();
	
}

//function that will log all sucessful and unsucessful login attempts
void toLoginLog(string username, string password)
{
	string toLog;
	string time;
	ofstream LoginLog;
	LoginLog.open("LoginLog.txt", fstream::app);
	toLog = Encrypt(username) +Encrypt(" ")+ Encrypt(password) + Encrypt(" ")+ Encrypt(time);
	LoginLog << toLog << "\n";
	
	LoginLog.close();
}

//Just used to test the above functions
int main()
{
	string first, last, dob, id, accountType;
	string username, password, auth;
	string encrypt;
	string decrypt;
	char key = 'J';

	first = "Admin";
	last = "Test";
	id = "102";
	dob = "5/08/1999";
	toCustomers(first,last,id,dob);
	username = "Admin";
	password = "pass";
	auth = "1";
	toAccountLog(username, password, auth);

	system("Pause");
	return 0;
}
