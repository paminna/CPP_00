#include "Phonebook.hpp"

int main(void)
{
    Phonebook book;
    std::string command;
    while (std::cin)
    {
        std::cout << "Enter command" << std::endl;
        std::cin >> command;
        if (command.compare("ADD") == 0)
        {
            book.add();
        }
        if (command.compare("SEARCH") == 0)
        {
            book.search();
        }
        if (command.compare("EXIT") == 0)
        {
            std::cout << "EXIT" << std::endl;
            return 0;
        }
    }
}