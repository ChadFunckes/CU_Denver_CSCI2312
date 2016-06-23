// Chad S Funckes
// Account class implementation, see account.h for documentation
#include "account.h"
namespace account {
Account::Account() { balance = 0; }
Account::Account(double initialDeposit) { balance = initialDeposit; }
double Account::getBalance() { return balance; }
void Account::deposit(double amount) {
	try {
		if (amount > 0) { // if greater than zero add to the balance
			balance += amount;
			return;
		}
		else
			throw DepositException(amount, balance); // if less than zero throw exception
	}catch (DepositException& E) {
		E.someError(); // print the error
	}
	return;
}
void Account::withdrawl(double amount) {
	try {
		if ((amount > balance) || (amount < 0)) // if less than zero or more than the balance throw error
			throw WithdrawlException(amount, balance);
		else // if amount to withdrawl is legit, subtract it from the balance
			balance -= amount;
		return;
	} catch (WithdrawlException& E) {
		E.someError(); // print the error
	}
	return;
}
}