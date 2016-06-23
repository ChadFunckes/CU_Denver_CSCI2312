// Chad S Funckes
// Exception Handling classes for the account class
/*
accountException class:
	Constructor: Sets the amount and balance to -1
	Void someError:  Prints to the screen generic error.

DepositException class, derives member variables from accountException class
	Constructor: Takes two double inputs, first is the amount causing the error 
	 			 and the second is the current balance at the time of error.


WithdrawlException class, derives member variables from the accountException class
	Constuctor: Takes two double inputs, first is the amount causing the error 
	 			 and the second is the current balance at the time of error.
	void someError: Prints Withdrawl specific error.
*/

#ifndef ACCOUNT_EXCEPTIONS
#define ACCOUNT_EXCEPTIONS
namespace account {
class accountException {
protected:
	double amount, balance; 
public:
	accountException();
	void someError();
};
class DepositException: public accountException{
public:
	DepositException(const double, const double); 
	void someError();
};
class WithdrawlException : public accountException {
public:
	WithdrawlException(const double, const double);
	void someError();
};
}
#endif