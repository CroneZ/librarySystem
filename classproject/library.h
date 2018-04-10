#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>

class initialize {
public:
	bool checkInput(std::string a);
	void regis();
	void login();
private:
	bool checkStudent();
	bool checkAdministrator();
	std::string id; 
	std::string password;
};

class student {
public:
	student();
private:
	std::string searching();
	void id_or_search();
	void borrow();
	void Return();

};

class administrator {
public:
	administrator();
private:



};

#endif
