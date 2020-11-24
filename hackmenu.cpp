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

int name::set(const name & object)
{
	return str.set(object.str);
}

name & name::operator=(const name & object)
{
	if(this == &object) return *this;

	set(object);
	return *this;
}


//USER CLASS FUNCTIONS
user::user() : onlineStatus(false) {}

user::~user() 
{
	onlineStatus = NULL;
}

int user::read() 
{
	name::read();

	cout << "Your password: ";
	cin >> password;

	return 1;
}

int user::setStatus()
{
	int userChoice = 0;

	cout << "\n1\t---\tSet to Online"
	     << "\n2\t---\tSet to Offline"
	     << "\nEnter integer choice here (1 or 2): ";
	
	cin >> userChoice; cin.ignore(100,'\n');
	
	if(userChoice != 1 && userChoice != 2)
	{
		cout << "\nImproper choice. Try again\n";
		return setStatus();
	}

	return userChoice;
}

int user::display()
{
	name::display();

	cout << "Online Status: ";

	if(onlineStatus)
	{
		cout << "Online\n";
	}

	else
	{
		cout << "Offline\n";
	}

	return 1;
}

user & user::operator=(const user & object) 
{
	if(this == &object) return *this;

	name::operator=(object);
	onlineStatus = object.onlineStatus;
	password = object.password;

	return *this;
}


