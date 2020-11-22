//Kunio Comey
//kstring.h
//
//This is a file to hold the string class using your own functions.

#ifndef KSTRING_H
#define KSTRING_H

#include <iostream>
#include <cstring>
#include <cctype>

class kstring
{
	private:
		char * str;
		int length;
	
	public:
		kstring();
		~kstring();

		int set(char *);
		int set(kstring &);

		int read();

		int display();
		int clear();

		friend std::ostream & operator<<(std::ostream &, const kstring &);
		friend std::istream & operator>>(std::istream &, kstring &);

		kstring & operator=(const kstring &);
};

#endif
