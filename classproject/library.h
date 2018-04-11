#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>

class initialize {
public:
	initialize();
	bool checkInput(std::string a);
	void regis();
	bool login();
	string checkIdentity(std::string);
private:
	class node {
	public:
		std::string idcheck;
		std::string passwordcheck;
		node* next;
	};

	class student {
	public:
		student();
		void borrow(std::string);
		void Return(std::string);
		bool borrowed;
		student* next;
		std::string id;
		std::string book_id;
		std::string searching();
		std::string id_or_search();

	};
	bool checkStudent();
	bool checkAdministrator();
	std::string id; 
	std::string password;
	node* head, *tail;
	student* Shead, *Stail;
	administrator *Ahead, *Atail;
};



class administrator{
public:
	administrator();
	void register_book();
	void get_book_status(book*);
	
private:
	std::string searching();
	string id_or_search();

};

class book {
public:
	book* next;
	string status;
	string book_id;

};
#endif
