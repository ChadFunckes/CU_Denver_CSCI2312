// CSCI 2312 Intermediate programming
// Chad S. Funckes
/*
This is the general functions for PA4 program

Functions:
float convert_to_GPA(float iGPA)
	Pre-Condition: iGPA is a grade percentage as a decimal ex: .75 
	Post Condition: GPA equvalent of the input number

bool fill_data(char* argv, college_person* &theList, int& numofRecords)
	Pre-Condition: argv is a char pointer to an input file, theList is a college_person type pointer to hold an array, num of records is a
		int value that will track the number of records in the array pointed to by theList.
	Post Condition: The data in argv is placed into an array created by the function, numOfrecords is modified to contain the
		number of records in the array, and a bool value of true is passed back to indicate success or false to indicate failure.

bool output_data(char* argv, college_person*& theList, const int& numofRecords)
	Pre-Condition: argv is a char pointer to an output file, theList is a college_person type pointer to a filled array of numofRecords entries
	Post Condition: the file specified in argv contains the formatted output as required.
*/
#include "college_person.h"

#ifndef FUNCKES_MAIN_FUNCTIONS_PA4
#define FUNCKES_MAIN_FUNCTIONS_PA4
namespace Funckes_PA4{
	float convert_to_GPA(float);
	bool fill_data(char*, college_person* &, int&);
	bool output_data(char*, college_person*&, const int&);
}
#endif
