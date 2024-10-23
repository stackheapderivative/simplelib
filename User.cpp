#include "User.hpp"

//getters
std::string User::getName() const{
    return User::name;
}

std::string User::getPassword() const{
    return User::password;
}

int User::getCDate() const{
    return User::creationDate;
}

User::AccountType User::getType() const{
    return User::accountType;
}

//setters

void User::setName(const std::string& newName){
    name = newName;
}

void User::setPassword(const std::string& newPassword){
    password = newPassword;
}

void User::setCDate(const int& newCreationDate){
    creationDate = newCreationDate;
}

void User::setType(const AccountType& newType){
    accountType = newType;
}