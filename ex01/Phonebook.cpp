#include "Phonebook.hpp"

Phonebook :: Phonebook() {
    _count = 0;
    _flag = 0;
}

Phonebook :: ~Phonebook() {

}

void Phonebook :: add()
{
    if (_count < 8)
    {

        _contacts[_count++].add_contact();
    }
    else
    {
        _count = 0;
        _contacts[_count].clear_contact();
        _contacts[_count++].add_contact();
    }
}

void Phonebook :: search()
{
    int i;

    i = 0;
    while (i < _count)
    {
        _contacts[i].search_contact();
        std::cout << std::setw(10) << i << "|" << std::endl;
        i++;
    }
}