#ifndef BOOK_HPP
#define BOOK_HPP

#include <iostream>
#include <string>

//Book class
class Book {
private:
	//Variables
	std::string author;
	std::string title;
	int date;
	std::string isbn;
	int copies;

public:
	//functions

	//getters
	//getTitle, getAuthor, getDate, getISBN, getCopies;
	//mutators
	//setTitle, setAuthor, setISBN, setDate, setCopies

	void getAuthor(std::string) {
		author = author;
	}

	void getTitle(std::string) {
		title = title;
	}

	void getISBN(std::string) {
		isbn = isbn;
	}

	void getDate(int) {
		date = date;
	}

	void getCopies(int) {
		copies = copies;
	}


};

#endif //BOOK_HPP