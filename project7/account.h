// Chad S Funckes
// Account Class definitions
/*
Account class:
	Constructors:
	Account()
		Initializes a new account with a balance of zero
	Account(double initialDeposit)
		Takes an double type input value and places that value as the starting balance
	/// Accessor functions
	double getBalance()
		Returns a double value balance on the account
	/// Mutator functions
	double deposit(amount)
		Takes a double value amount and add it to the account balance
	double withdrawl(amount)
		Takes a double value amount and subtracts it from the account balance
*/
#ifndef ACCOUNT_CLASS
#define ACCOUNT_CLASS
#include "exceptions.h" // for exception handling
namespace account {
	
	class Account {
	private:
		double balance;

	public:
		Account();
		Account(double initialDeposit);
		// Accessors
		double getBalance();
		// Mutators
		void deposit(double amount);
		void withdrawl(double amount);
	};
} // end namespace account
#endif