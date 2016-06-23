// Chad S Funckes
// Driver program to test account class exceptions
#include "account.h" // include account class
#include <iostream> // for outputs
using std::endl; using std::cout; // for test outputs
using namespace account;

int main() {
	Account test(100);
	test.deposit(-5); // should call error
	cout << endl;
	test.withdrawl(200); // should call error
	cout << endl;
	test.deposit(100); // should be success
	cout << endl;
	test.withdrawl(100); // should be success
	cout << endl;
	cout << "Balance is: " << test.getBalance() << endl; //should be 100 again.
}
