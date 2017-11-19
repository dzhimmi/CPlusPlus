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
	cout << "Enter your password >" << endl;
	cin >> input;

	do {
		if (input == password) {
			cout << "Correct Password: Access Granted" << endl;
		}
		else {
			cout << "Wrong Password!" << endl << endl << "Enter Your Password" << endl;
			cin >> input;
		}
	} while (input != password);
	

	return 0;
}


//Functions

