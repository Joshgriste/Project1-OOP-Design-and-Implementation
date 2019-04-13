//Admin.h
#include <iostream>
#include "User.h"
using namespace std;

#ifndef ADMIN_H
#define ADMIN_H

class Admin: public User{
	public:
		Admin();
		int controlMenu();
		void print();
};
#endif
	
