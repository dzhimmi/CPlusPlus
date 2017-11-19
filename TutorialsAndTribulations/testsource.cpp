//Includes
#include <iostream>
#include <string>
#include <limits>


//Misc.
using namespace std;


//Variables
string password = "1234";
string input;

//main
int main() {
	cout << "Enter your password >" << flush;
	cin >> input;

	if (input == password) {
		cout << "Correct: Access Granted!" << endl;
	}
	else {
		cout << "Incorrect: Access Denied!" << endl;
	}

	return 0;
}


//Functions

