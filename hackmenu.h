#include "kstring.h"

#ifndef HACKMENU_H
#define HACKMENU_H

class name
{
	protected:
		kstring str;
	
	public:
		name();
		~name();
		int read();
		int display();
		int set(name &);
};


class user : public name
{
	protected:
		bool onlineStatus;
		kstring password;
	
	public:
		user();
		~user();
		int read();
		int display();
		int set(user &);
};

#endif
