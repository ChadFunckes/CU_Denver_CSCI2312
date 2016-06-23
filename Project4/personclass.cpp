// CSCI 2312 Intermediate programming
// Chad S. Funckes
/*
Implememntation file for the person class, please see person.h for details.
*/

#include "personclass.h"
#include <iostream>
#include <string>
using namespace std;
namespace Funckes_PA4{

	person::person() { name = "none"; age = 0; gender = "N"; } // default constructor
	person::person(string iName, int iAge, string iGender){ // full constructor
		set_name(iName); // call routine on name
		set_age(iAge); // call routine on age
		set_gender(iGender); // call routine on gender
	}
	void person::set_name(string iName){ // limit the persons name to 15 char and store
		name = iName.substr(0, TSIZE);
	}
	void person::set_age(int iAge){ // limit the persons age to 0-100 and store
		age = iAge;
		while (age < 0 || age>100){ // check and correct age range
			cout << "The age input of " << age << " is outside of the legal ages from 0-100"
				<< "Please enter a valid age\n";
			cin >> age;
		}
	}
	void person::set_gender(string iGender){ // ensure gender = M or F only
		gender = toupper(iGender[0]);
		while (gender != "M" && gender != "F"){ // check and correct gender
			cout << "The gender of " << gender << " must be a M or F\n"
				<< "Please enter a valid gender\n";
			cin >> gender;
			gender = toupper(gender[0]);
		}
	}
	
}