#include "hackmenu.h"
using namespace std;

//NAME CLASS FUNCTIONS
name::name() {}

name::~name() {}

int name::read() 
{
	cout << "\nPlease enter in your username: ";
	cin >> str; //Note we already ignore in the overloaded function.

	return 1;
}

int name::display()
{
	cout << "\nYour username: " << str << endl;
	return 1;
}


