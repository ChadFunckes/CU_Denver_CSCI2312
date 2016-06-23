// CSCI 2312 Intermediate programming
// Chad S. Funckes
/*
This is the implementation file for the college_person class, please see college_person.h for documentation.
*/
#include "college_person.h"
#include "personclass.h"
#include <iostream>
#include <string>
using namespace std;
using namespace Funckes_PA4;
namespace Funckes_PA4{
	/// CONSTRUCTORS
	college_person::college_person(person iPerson) {
		set_name(iPerson.get_name());
		set_age(iPerson.get_age());
		set_gender(iPerson.get_gender()); 
		university = "not set"; college = "not set"; id = 000; letter = "X"; GPA = 0;	
	}
	college_person::college_person(person iPerson, string iUniversity, string iCollege, int iId, float iGPA){
		set_name(iPerson.get_name());
		set_age(iPerson.get_age());
		set_gender(iPerson.get_gender());
		set_university(iUniversity);
		set_college(iCollege);
		set_id(iId);
		set_GPA(iGPA);
	}
	college_person::college_person(string iName, int iAge, string iGender, string iUniversity, string iCollege, int iId, float iGPA){
		set_name(iName);
		set_age(iAge);
		set_gender(iGender);
		set_university(iUniversity);
		set_college(iCollege);
		set_id(iId);
		set_GPA(iGPA);
	}
	/// MUTATOR FUNCTIONS
	void college_person::set_name(string iName){
		person::set_name(iName);
	}
	void college_person::set_age(int iAge){
		person::set_age(iAge);
	}
	void college_person::set_gender(string iGender){
		person::set_gender(iGender);
	}
	void college_person::set_university(string iUniversity){
		university = iUniversity.substr(0, TSIZE);
	}
	void college_person::set_college(string iCollege){
		college = iCollege.substr(0, TSIZE);
	}
	void college_person::set_id(int iID){
		while (iID < 800 && iID > 899){
			cout << "The student ID of " << iID << " is not valid\n"
				<< "It must be between 800 and 899.  Please enter a valid id for:\n"
				<< get_name() << endl;
			cin >> iID;
		}
		id = iID;
	}
	void college_person::set_GPA(float iGPA){
		while (iGPA < 0 || iGPA > 4.5){
			cout << "The student GPA of " << iGPA << " is out of range\n"
				<< "Please enter a GPA between 0 and 4.5\n";
			cin >> iGPA;
		}
		GPA = iGPA;	
		set_letter(iGPA);
	}
	void college_person::set_letter(float iGPA){
		if (iGPA > 4)
			letter = "A+";
		else if (iGPA > 3.6)
			letter = "A";
		else if (iGPA > 3.2)
			letter = "B+";
		else if (iGPA > 2.9)
			letter = "B";
		else if (iGPA > 2.6)
			letter = "B-";
		else if (iGPA > 2.2)
			letter = "C+";
		else if (iGPA > 1.9)
			letter = "C";
		else if (iGPA > 1.6)
			letter = "C-";
		else if (iGPA > 1.2)
			letter = "D+";
		else if (iGPA > .9)
			letter = "D";
		else if (iGPA > .6)
			letter = "D-";
		else
			letter = "F";
		return;
	}
}