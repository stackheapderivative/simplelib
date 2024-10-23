#ifndef USER_HPP
#define USER_HPP

#include "LIBRARY.hpp"

class User {

public:
//enum of account types
enum AccountType{Admin, Staff, Visitor};

private:
    std::string name;
    std::string password;
    int creationDate;
    AccountType accountType;


public:

//getters
std::string getName() const;
std::string getPassword() const;
AccountType getType() const;
int getCDate() const;

//setters
void setName(const std::string&);
void setPassword(const std::string&);
void setType(const AccountType&);
void setCDate(const int&);


};


#endif