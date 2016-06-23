// CSCI 2312 Intermediate programming
// Chad S. Funckes
/*
This is main driver file for PA4

This program takes in an input file specified from the command line, pre-formattted IAW instructions
and creates and dynamic array of college_person class objects (which is inherited from class person)
and then creates the proper output to a file specified my the user.  Correct command line usage
of the file is PA4 input.txt output.txt
*/

#include <iostream>
#include <string>
#include "college_person.h"
#include "functions.h"

using namespace std;
using namespace Funckes_PA4;

int main(int argc, char* argv[]){
	if (argc < 3){
		cout << "You must specify input and output files at run time\n"
			<< "Example of program usage is as follows:\n\n"
			<< "   PA4 input.txt output.txt\n\n"
			<< "Please run the program again with correct parameters.\n";
		return 0;
	}
	int numofRecords = 0; // record counter
	college_person* test; // pointer for memory allocation
	test = NULL;
	
	if (fill_data(argv[1], test, numofRecords) == false) // fill data from file, if operation fails exit the program
		return 0;

	if (output_data(argv[2], test, numofRecords) == false)
		return 0;
	return 0;
}
