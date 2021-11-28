#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
    std::time_t t = std::time(nullptr);
    char mbstr[100];
    std::strftime(mbstr, sizeof(mbstr), "[%Y%m%d_%H%M%S] ", std::localtime(&t));
    std::cout << mbstr;
}

Account::Account(int initial_deposit) {
    _accountIndex = _nbAccounts;
    _totalAmount += initial_deposit;
    _nbAccounts++;
    _amount = initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
    return(_nbAccounts);
}

int	Account::getTotalAmount(void)
{
    return(_totalAmount);
}

int	Account::getNbDeposits(void)
{
    return(_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return(_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts()
    << ";total:" << getTotalAmount() << ";deposits:"
    << getNbDeposits() << ";withdrawals:" <<getNbWithdrawals() << std::endl;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:"
    << _amount << ";deposits:" << _nbDeposits
    << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _nbDeposits += 1;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
    << ";deposit:" << deposit << ";amount" << _amount + deposit
    << ";nb_deposits:" << _nbDeposits << std::endl;
    _amount += deposit;
}

int		Account::checkAmount(void) const
{
    if (_amount > 100)
        return(1);
    else
        return(0);
}

bool	Account::makeWithdrawal(int withdrawal)
{
    _nbWithdrawals = checkAmount();
    return (checkAmount());
}

Account::Account(void)
{

}

