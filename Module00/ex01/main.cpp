#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <cstring>
#include <stdlib.h>

void printMenu() {
    std::cout << "\n\033[1;32m***************************************\033[0m\n";
    std::cout << "\033[1;36m*         📞 PHONEBOOK MENU 📞         *\033[0m\n";
    std::cout << "\033[1;32m*****************************************\033[0m\n";
    std::cout << "\033[1;33m*  [ADD]    ➝ Add a new contact        *\033[0m\n";
    std::cout << "\033[1;33m*  [SEARCH] ➝ Find a contact           *\033[0m\n";
    std::cout << "\033[1;33m*  [EXIT]   ➝ Quit the application     *\033[0m\n";
    std::cout << "\033[1;32m*****************************************\033[0m\n\n";
    std::cout << "🔹 Please enter your choice: ";
}

int main() 
{
    std::string prompt;
    PhoneBook PhoneBook;

    while (true) 
    {
        printMenu();
        std::cin >> prompt;

        if (prompt == "ADD") {
            std::cout << "\n✅ You selected \033[1;32mADD\033[0m.\n\n";
            PhoneBook.addContact();
            // Call function to add contact
        }
        else if (prompt == "SEARCH") {
            std::cout << "\n🔍 You selected \033[1;34mSEARCH\033[0m.\n\n";
            PhoneBook.displayContact();
            // Call function to search contacts
        }
        else if (prompt == "EXIT") {
            std::cout << "\n🚪 You selected \033[1;31mEXIT\033[0m. Goodbye!\n\n";
            break;
        }
        else {
            std::cout << "\n❌ \033[1;31mInvalid action!\033[0m Please enter ADD, SEARCH, or EXIT.\n";
        }
    }
    system("clear");
    return 0;
}