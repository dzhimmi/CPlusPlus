//Includes
#include <iostream>
#include <string>
#include <limits>


//Misc.
using namespace std;


//Variables
const string password = "1234isabadpassword";
string input;

//main
int main() {
	do {
		cout << "Enter your password >" << endl;
		cin >> input;
		if (input != password) {
			cout << "Incorrect Password: Access Denied!" << endl << endl;
		}
	} while (input != password);
	cout << "Correct Password: Access Granted!" << endl;

	return 0;
}


//Functions

