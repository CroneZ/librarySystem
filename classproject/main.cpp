#include <iostream>
#include <string>
#include "library.h"
using namespace std;

void main() {
	initialize start;
	string choice;
	created:
	cout << "Do you have an account?(Y/N) : ";
	cin >> choice;
	/*while (start.checkInput(choice)!=true) {
		cout << "Invalid input! Please reenter!" << endl;
		cout << "Do you have an account?(Y/N) : ";
		cin >> choice;
	}*/
	if (choice == "Y") {
		if (start.login() == true) {
			
		}
		
			
		
	}
	else {
		start.regis();
		goto created;
	}

}