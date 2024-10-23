#include "Book.hpp"


//getter functions

std::string Book::getAuthor() const{
    return author;
}
std::string Book::getTitle() const{
    return title;
}
std::string Book::getISBN() const{
    return isbn;
}
int Book::getDate() const{
    return date;
}
int Book::getCopies() const{
    return copies;
}

//setters

void Book::setAuthor(const std::string& newAuthor){
    author = newAuthor;
}

void Book::setTitle(const std::string& newTitle){
    title = newTitle;
}

void Book::setISBN(const std::string& newISBN){
    isbn = newISBN;
}

void Book::setDate(const int& newDate){
    date = newDate;
}

void Book::setCopies(const int& newCopies){
    copies = newCopies;
}