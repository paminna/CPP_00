#include "Contact.hpp"

Contact :: Contact() {
    _firstName = "";
    _lastName = "";
    _nickname = "";
    _darkestSecret = "";
    _phoneNumber = "";
}

Contact :: ~Contact() {

}

void    Contact :: add_contact()
{
    std::cout << "Enter first name" << std::endl;
    std::cin >> _firstName;
    std::cout << "Enter last name" << std::endl;
    std::cin >> _lastName;
    std::cout << "Enter nickname" << std::endl;
    std::cin >> _nickname;
    std::cout << "Enter phone number" << std::endl;
    std::cin >> _phoneNumber;
    std::cout << "Enter darkest secret" << std::endl;
    std::cin >> _darkestSecret;
}

void    Contact :: search_contact()
{
    if (!_firstName.empty())
        std::cout << std::setw(10) << _firstName << "|";
    if (!_lastName.empty())
        std::cout << std::setw(10) << _lastName << "|";
    if (!_nickname.empty())
        std::cout << std::setw(10) << _nickname << "|";
}

void    Contact :: clear_contact()
{
    _firstName = "";
    _lastName = "";
    _phoneNumber = "";
    _darkestSecret = "";
    _nickname = "";
}