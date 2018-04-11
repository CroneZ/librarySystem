#include <iostream>
#include <string>
#include <fstream>
#include "library.h"
using namespace std;

initialize::initialize() {
	ifstream generate;
	student *temp = new student();
	administrator *tempo = new administrator();
	node *tempa = new node();
	//generate student list first
	// In order of id , status, then if status equal to true continue for bookid
	generate.open("");
	while (generate.eof != true) {
		generate >> temp->id >> temp->borrowed;
		if (temp->borrowed == true) {
			generate >> temp->book_id;
		}
		temp->next = NULL;


	}

}

bool initialize:: login() {
	cout << "ID: ";
	getline(cin, id);
	cout << "Password: ";
	getline(cin, password);
	//start search within database for id with corresponding password
	//direct to start of list

}

void initialize::regis() {

	
}

string student::id_or_search() {
	string yesorno;
	string book_id;
	cout << "Do you know the ID of the book (if yes type 'yes'): ";
	cin >> yesorno;
	if (yesorno == "yes") {
		cout << "Please enter the ID of the book: ";
		cin >> book_id;
	}
	else {
		book_id = searching();
		//implement searchin in the database
	}
	return book_id;
}
//search with 3 keywords then it will form a book id with moves on to searching
//can be used for adding in new books
string student::searching() {
	string digit,answers;
	bool flag = true;
	cout << "Is it fiction or non-fiction: ";
	cin >> answers;
	while (flag) {
		if (answers == "fiction") {
			digit = 'F';
			flag = false;
		}
		else if (answers == "non-fiction") {
			digit = 'N';
			flag = false;
		}
		else {
			cout << "Invalid input Try Again!" << endl;
			cout << "Is it fiction or non-fiction: ";
			cin >> answers;
		}
	}
	answers.clear();
	int y;
	string hold;
	for (int i = 1; i <= 3; i++) {
		hold.clear();
		cout << "Please State Keyword "<<i<<" : ";
		cin >> answers;
		for (int j = 0; j < 3; j++) {
			char x = answers.at(j);
			hold += to_string(x);
		}
		y = stoi(hold);
		y = y%hold.length();
		hold = to_string(y);
		digit += hold;
	}
	return digit;
}
string administrator::id_or_search() {
	string yesorno;
	string book_id;
	cout << "Do you know the ID of the book (if yes type 'yes'): ";
	cin >> yesorno;
	if (yesorno == "yes") {
		cout << "Please enter the ID of the book: ";
		cin >> book_id;
	}
	else {
		book_id = searching();
		//implement searchin in the database
	}
	return book_id;
}
//search with 3 keywords then it will form a book id with moves on to searching
//can be used for adding in new books
string administrator::searching() {
	string digit, answers;
	bool flag = true;
	cout << "Is it fiction or non-fiction: ";
	cin >> answers;
	while (flag) {
		if (answers == "fiction") {
			digit = 'F';
			flag = false;
		}
		else if (answers == "non-fiction") {
			digit = 'N';
			flag = false;
		}
		else {
			cout << "Invalid input Try Again!" << endl;
			cout << "Is it fiction or non-fiction: ";
			cin >> answers;
		}
	}
	answers.clear();
	int y;
	string hold;
	for (int i = 1; i <= 3; i++) {
		hold.clear();
		cout << "Please State Keyword " << i << " : ";
		cin >> answers;
		for (int j = 0; j < 3; j++) {
			char x = answers.at(j);
			hold += to_string(x);
		}
		y = stoi(hold);
		y = y%hold.length();
		hold = to_string(y);
		digit += hold;
	}
	return digit;
}

student::student() {
	borrowed = false;
	book_id.clear();
	
}

administrator::administrator() {
	
}