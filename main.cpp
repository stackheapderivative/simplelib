#include "LIBRARY.hpp"

int main () {

    std::cout << "Welcome to the library management, created by Enginseer dummy!" << std::endl;
    bool running = true;
    bool logged = false;

    do { //FIXME: Add system of getting username and password while also checking for current data if it is equivalent, if not, ask to create new profile with data.
        std::cout << "Please log-in!" << std::endl;
        std::cout << "Username: ";
        //enter cin statement here
        std::cout << "\n";
        std::cout << "Password: ";

    }while(!logged);

    do {//FIXME: Add switch statement in order to do menu commands.
        std::cout << "Please input one of the following commands: \n";

        std::cout << "1. Search library.\n";
        std::cout << "2. Create or remove a book.\n";
        std::cout << "3. Exit the system.";


    }while(running);

    /*Options:
    Search for a book.
    Add a book.
    Delete a book.
    Exit.
    */

   //FIXME: Finish on book classes first, then do some testing here regarding them.



    return 0;
}