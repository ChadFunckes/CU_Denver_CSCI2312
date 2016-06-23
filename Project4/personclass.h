// CSCI 2312 Intermediate programming
// Chad S. Funckes
/*
Definition file for the person class.

Functions:
CONSTRUCTORS: 
person();
	Post consition: name= none, age = 0, gender = N
person(string, int, string);
	Post Condition: Name, age and gender are set by the user.

ACCESSORS:
const string get_name()
	Post Condition: Name is returned as a string.
const int get_age()
	Post Condition: Age is returned as an int.
const string get_gender()
	Post Condition: Gender is returned as a string.
MUTATORS:
void set_name(string);
	Post Condition: name is set by the user and limited in size to TSIZE.
void set_age(int);
	Post condition: age is set by the user, limits between 0-100
void set_gender(string);
	Post Condition: Gender is set based on user input to a M or F.
*/

#ifndef FUNCKES_PA4_PERSON
#define FUNCKES_PA4_PERSON
#include <string>
using namespace std;
namespace Funckes_PA4{

	class person{
		
	public:
		static const int TSIZE = 15; // text size cap for all text fields
		// CONSTRUCTORS
		person();  // default constructor
		person(string, int, string); // full constructor

		// MUTATORS
		void set_name(string);
		void set_age(int);
		void set_gender(string);

		// ACCESSORS
		const string get_name() { return name; }
		const int get_age() { return age; }
		const string get_gender() { return gender; }

	private:
		string name;
		int age;
		string gender;
	};
}
#endif
