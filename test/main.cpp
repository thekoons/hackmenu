//Testing out the kstring functions, specifically the = operator.

#include "kstring.h"
using namespace std;

int main()
{
	kstring myStr;
	kstring test1;
	kstring test2;

	cout << "\nPlease enter in your string: ";
	cin >> myStr; 
	cout << "\nYour string: " << myStr;

	test1 = test2 = myStr;

	cout << "\nTest1 string (should be copy of your string): " 
	     << test1
	     << "\nTest2 string (should be the same): "
	     << test2 << endl;

	return 1;
}
