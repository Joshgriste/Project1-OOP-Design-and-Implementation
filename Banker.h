//Banker.h
#include <iostream>
#include "User.h"
using namespace std;

#ifndef BANKER_H
#define BANKER_H

class Banker: public User{
	public:
		Banker();
		void print();
};
#endif
	
