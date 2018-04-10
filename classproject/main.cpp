#include <iostream>
#include <string>
#include "library.h"
using namespace std;

void main() {
	initialize start;
	string choice;
	cout << "Do you have an account?(Y/N) : ";
	cin >> choice;
	/*while (start.checkInput(choice)!=true) {
		cout << "Invalid input! Please reenter!" << endl;
		cout << "Do you have an account?(Y/N) : ";
		cin >> choice;
	}*/
	if (choice == "Y") {
		start.login();
		
			
		
	}
	else {
		start.regis();
	}

}