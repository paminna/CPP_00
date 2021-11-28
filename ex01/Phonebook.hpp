#ifndef PHONEBOOK
#define PHONEBOOK

#include "Contact.hpp"

class Phonebook {
public:
    Phonebook();
    ~Phonebook();
    void add();
    void search();
private:
    int _count;
    int _flag;
    Contact _contacts[8];
};

#endif