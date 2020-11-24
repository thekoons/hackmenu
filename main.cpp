#include "hackmenu.h"
using namespace std;

int menu(int userChoice);

int main()
{
	//Variables.
	int userChoice = 0;
	name myName;
	name testName;
	user myUser;
	user testUser;

	//Menu
	userChoice = menu(userChoice);

	switch(userChoice)
	{
		case 1:
			myName.read();
			myName.display();

			testName = myName;
			cout << "\nTesting assignment operator:\n";
			testName.display();

			break;

		case 2:
			myUser.read();
			myUser.setStatus();
			myUser.display();

			testUser = myUser;
			cout << "\nTesting assignment operator:\n";
			testUser.display();

			break;

		case 0:
			cout << "\nThanks for using this test program!\n";
			break;
		
		default:
			userChoice = menu(userChoice);
	}

	return 1;
}

int menu(int userChoice)
{
	cout << "\nPlease enter in your class to test"
	     << "\n1\t---\tTest Name"
	     << "\n2\t---\tTest User"
	     << "\n0\t---\tQuit"
	     << "\nType integer choice here (0-2): ";

	cin >> userChoice; cin.ignore(100,'\n');
	
	return userChoice;
}

		
