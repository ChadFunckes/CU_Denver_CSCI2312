// CSCI 2312 Intermediate programming
// Chad S. Funckes
/*
Definitions for college_person class, that inherits from person class.

Functions:
CONSTRUCTORS:
college_person() 
	Post Condition: Set the name age and gender using the person class constructor then sets: university = "not set"; college = "not set"; id = 000; letter = "X"; GPA = 0.
college_person(person); // use a person to make a college person
	Post Condition: Sets the name age and gender from the input person class and then sets: university = "not set"; college = "not set"; id = 000; letter = "X"; GPA = 0.
college_person(person, string, string, int, float)
	Post Condition: Sets the name, age and gender from the input person class obj and then sets the remaining to the inputs provided.
college_person(string, int, string, string, string, int, float)
	Post Condition: Sets all elements from scratch name, age, gender, university, college, id, letter and GPA

ACCESSORS
const string get_name()
	Post Condition: Returns the name using the existing function from person class.
const int get_age()
	Post Condition: Returns the age using the existing function from person class.
const string get_gender()
	Post Condition: Returns the gender using the existing function from person class.
const string get_university() 
	Post Condition: Returns the university.
const string get_college()
	Post Condition:Returns the college.
const int get_id()			
	Post Condition: Returns the ID.
connst string get_letter()	
	Post Condition: Returns the letter grade.
const float get_GPA()
	Post Condition: Returns the GPA.

MUTATORS:
void set_name(string);
	Post Condition: Sets the name in the object via rules from person class.
void set_age(int);
	Post condition: Sets the age in the object via rules from person class.
void set_gender(string);
	Post condition: Sets the gender in the object via the rules from person class.
void set_university(string);
	Post condition:  Sets the university in the object from the input, size limited to TSIZE.
void set_college(string);
	Post condition: Sets the college in the object from the input, size limited to TSIZE.
void set_id(int);
	Post Condition: An ID is set from the input, limited to the numbers 800-899, a number out of this range will prompt to correct before set.
void set_GPA(float);
	Post Conidtion: A GPA is set, between 0-4.5 based on input and a letter grade is assigned.
*/

#ifndef FUNCKES_PA4_COLLEGE_PERSON
#define FUNCKES_PA4_COLLEGE_PERSON
#include "personclass.h"
#include <string>
using namespace std;
namespace Funckes_PA4{

	class college_person : public person{
	public:
		static const int TSIZE = person::TSIZE; // copies the max text size from the person class.
		college_person() { person(); university = "not set"; college = "not set"; id = 000; letter = "X"; GPA = 0; }; // default constructor
		college_person(person); // use a person to make a college person
		college_person(person, string, string, int, float); // constructor if class person already exists
		college_person(string, int, string, string, string, int, float); // constructor from blank

		//ACCESSORS
		const string get_name()		{ return person::get_name(); }
		const int get_age()			{ return person::get_age(); }
		const string get_gender()	{ return person::get_gender(); }
		const string get_university() { return university; }
		const string get_college()	{ return college; }
		const int get_id()			{ return id; }
		const string get_letter()	{ return letter; }
		const float get_GPA()		{ return GPA; }

		//MUTATORS
		void set_name(string);
		void set_age(int);
		void set_gender(string);
		void set_university(string);
		void set_college(string);
		void set_id(int);
		void set_GPA(float);

	private:
		void set_letter(float); // private function, should only be accessed by the set_GPA function
		string university;
		string college;
		int id;
		string letter;
		float GPA;
	};
}
#endif