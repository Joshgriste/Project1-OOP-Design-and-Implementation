//Admin.h
#include "User.h"

#ifndef ADMIN_H
#define ADMIN_H

class Admin{
	public:
		Admin();
		/*access type set to ATM by default in user
		Access types:
			Audit - can change account information and add users
			Teller - can move money to/from accounts
			ATM - can withdraw money and view account info
		*/
		void setAccess(string);
    void print();		
};

#endif
