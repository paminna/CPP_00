#ifndef CONTACT
# define CONTACT

#include <iostream>
#include <iomanip>

class   Contact{
public:
    Contact();
    ~Contact();
    void add_contact();
    void search_contact();
    void clear_contact();
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;
};

#endif
