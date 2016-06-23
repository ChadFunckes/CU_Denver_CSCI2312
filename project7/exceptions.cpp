// Chad S Funckes
// Account Exceptions Class implementations, see exceptions.h for documentation.
#include "exceptions.h"
#include <iostream>
using std::cout;
using std::endl;

namespace account {
accountException::accountException() { amount = -1; balance = -1; }
void accountException::someError() {
		cout << "Unspecified balance error causing < 0 value occured\n";
	}
DepositException::DepositException(const double amount, const double balance) { this->balance = balance; this->amount = amount; }
void DepositException::someError() {
	cout << "Deposit value of " << amount << " can not be less than 0\n";
}
WithdrawlException::WithdrawlException(const double amount, const double balance) { this->balance = balance; this->amount = amount; }
void WithdrawlException::someError() {
		cout << "Value of: " << -amount
		<< "\nWill cause the current balance of: " << balance
		<< "\nto be less than zero\n";
}
} // end namespace account