#ifndef BOOK_HPP
#define BOOK_HPP

#include "LIBRARY.hpp"

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

	//getters
	
	std::string getAuthor() const;

	std::string getTitle() const;

	std::string getISBN() const;

	int getDate() const;

	int getCopies() const;

	//mutators

	void setAuthor(const std::string&);
	void setTitle(const std::string&);
	void setISBN(const std::string&);
	void setDate(const int&);
	void setCopies(const int&);


};

#endif //BOOK_HPP