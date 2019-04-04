//EncryptingToFile.cpp
#include<iostream>
#include<fstream>
using namespace std;

//Function that takes a string and returns an encrypted string
string Encrypt(string toEncrypt) 
{
	char key = 'J';
	string encrypted = toEncrypt;
	for (int i = 0; i < toEncrypt.size(); i++)
        encrypted[i] = toEncrypt[i] ^ key;
    
	return encrypted;
}

//Function that will take an encrypted string and decrypt it (returns as a string)
string Decrypt(string toDecrypt)
{
	char key = 'J';
	string decrypted = toDecrypt;
	for (int i = 0; i < toDecrypt.size(); i++)
		decrypted[i] = toDecrypt[i] ^ key;
	
	return decrypted;
}

//Function that will take customer variables, encrypt it using encrypt function, and write to "CustomerInfo.txt"
void toCustomers(string first, string last, string id, string dob)
{
	string toLog;
	ofstream log;
	log.open("CusomerInfo.txt", fstream::app);
	toLog = Encrypt(first+" "+last+" "+id+" "+dob);
	log << toLog << "\n";
	
	log.close();
}

//Just used to test the above functions
int main()
{
	string first, last, dob, id, accountType;
	string encrypt;
	string decrypt;
	char key = 'J';

	first = "This is a test!";
	last = "This is a test too!";
	toCustomers(first,last,id,dob);

	system("Pause");
	return 0;
}
