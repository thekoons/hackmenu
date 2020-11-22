#include "kstring.h"
using namespace std;

//Default constructor
kstring::kstring() : str(NULL), length(0) {}

//Destructor
kstring::~kstring() 
{
	clear();
}

//Setting the str to be the same as the character array
//passed in as an argument.
int kstring::set(char * temp)
{
	if(!temp)
	{
		return 0;
	}

	if(str)
	{
		clear();
	}

	length = strlen(temp);
	str = new char[length + 1];
	strcpy(str, temp);
	

	return 1;
}

//Set function with a kstring class passed in as an argument
//rather than the character array. Will just be a wrapper for
//the above function.
int kstring::set(kstring & temp)
{
	return set(temp.str);
}

//Function to read in the contents into the character array.
int kstring::read()
{
	char temp[100];
	cin.get(temp, 100, '\n'); cin.ignore(100,'\n');

	return set(temp);
}

//This will deallocate the memory of str and set it to NULL.
int kstring::clear()
{
	if(!str)
	{
		return 0;
	}

	delete [] str;
	str = NULL;
	return 1;
}

//Function to display the str data.
int kstring::display()
{
	if(!str) 
	{
		return 0;
	}

	cout << str;
	return 1;
}

//Overloaded operator to output with <<
ostream & operator<<(ostream & out, const kstring & object)
{
	out << object.str;
	return out;
}

//Overloaded operator to read in with >>
istream & operator>>(istream & in, kstring & object)
{
	object.read();
	return in;
}

//Overloaded assignment operator
kstring & kstring::operator=(const kstring & object)
{
	if(this == &object) return *this;

	set(object);
	return *this;
}




