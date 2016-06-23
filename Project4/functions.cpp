//Chad S Funckes
// CSCI 2312 Imtermediate programming
// implementation of main functions, please see functions.h for documentation.

#include <iostream>
#include <stdlib.h> // needed for g++ atoi atof functions.
#include <iomanip> // needed for set precision.
#include <fstream>
#include <string>
#include "college_person.h"
#include "functions.h"

using namespace std;
namespace Funckes_PA4{

	float convert_to_GPA(float iGPA){
		float answer;
		if (iGPA >= .94)
			answer = 4.0;
		else if (iGPA >= .90)
			answer = 3.7;
		else if (iGPA >= .87)
			answer = 3.3;
		else if (iGPA >= .83)
			answer = 3.0;
		else if (iGPA >= .80)
			answer = 2.7;
		else if (iGPA >= .77)
			answer = 2.3;
		else if (iGPA >= .73)
			answer = 2.0;
		else if (iGPA >= .70)
			answer = 1.7;
		else if (iGPA >= .67)
			answer = 1.3;
		else if (iGPA >= .60)
			answer = 1.0;
		else
			answer = 0.0;
		return answer;
	}
	bool fill_data(char* argv, college_person* &theList, int& numofRecords){
		//// set up intake parameters
		string iName, iGender, iUniversity, iCollege, iBuffer;
		int iAge, iId;
		float score, iGPA = 0;
		/// open data file for input and check success
		ifstream inFile;
		inFile.open(argv);
		if (!inFile.is_open()){ // if file does not open return bool false to function
			cout << "Input file " << argv << " did not open...\n"
				<< "Please specify a valid file and try again\n";
			return false;
		}
		//// determine how many records
		while (!inFile.eof()){
			getline(inFile, iBuffer, '\n');
			numofRecords++;
		}
		numofRecords = (numofRecords / 6);  // number of records is lines in divided by 6
		inFile.clear();					 // clear eof bit
		inFile.seekg(0);				// put file back at begining
		theList = new college_person[numofRecords]; // create new list
		if (!theList){
			cout << "memory allocation failed...\n";
			return false;
		}
		//// get data in from file
		for (int i = 0; !inFile.eof(); i++){
			getline(inFile, iName, ',');
			theList[i].set_name(iName);
			getline(inFile, iBuffer, ','); // take in age in string buffer
			iAge = atoi(iBuffer.c_str());  // convert age into int value
			theList[i].set_age(iAge);
			getline(inFile, iGender, ',');
			theList[i].set_gender(iGender);
			getline(inFile, iUniversity, ',');
			theList[i].set_university(iUniversity);
			getline(inFile, iCollege, ',');
			theList[i].set_college(iCollege);
			getline(inFile, iBuffer, '\n'); // take in ID into string buffer
			iId = atoi(iBuffer.c_str());    // convert buffer to ID value
			theList[i].set_id(iId);
			/// do grades
			for (int a = 0; a < 5; ++a){
				inFile.ignore(5, ','); // ignore HW1 text
				getline(inFile, iBuffer, '/'); // put score in buffer
				score = atof(iBuffer.c_str());   // convert score to float
				getline(inFile, iBuffer, '\n');// put total pointe in buffer
				score = score / atof(iBuffer.c_str()); // calc score
				iGPA = iGPA + score;
			}
			/// CALCULATE GPA
			iGPA = iGPA / 5; // get percentage
			iGPA = convert_to_GPA(iGPA); // convert to gpa score
			theList[i].set_GPA(iGPA);
		}
		//// close the file
		inFile.close();
		return true;
	}
	bool output_data(char* argv, college_person*& theList, const int& numofRecords){
		//// Open output file and check if open
		ofstream outFile;
		outFile.open(argv);
		if (!outFile.is_open()){ // If file does not open, return bool false to function
			cout << "The output file specified could not be created...\n"
				<< " Please try again.\n";
			return false;
		}
		//// Output the list
		setprecision(3); // two dec places for GPA digits.
		for (int i = 0; i < numofRecords; ++i){
			outFile << theList[i].get_university() << endl;
			outFile << "Name\t\t" << "Age\t" << "Gender\t" << "ID\t" << "College\t\t" << "GPA\t" << "Grade\n";
			outFile << theList[i].get_name() << "\t";
			if (theList[i].get_name().length() < 8) // correct output for short names
				outFile << "\t";
			outFile << theList[i].get_age() << "\t"
				<< theList[i].get_gender() << "\t"
				<< theList[i].get_id() << "\t"
				<< theList[i].get_college() << "\t";
			if (theList[i].get_college().length() < 8) // correct output for short names
				outFile << "\t";
			outFile << theList[i].get_GPA() << "\t"
				<< theList[i].get_letter() << "\n\n";
		}
		/// Close File
		outFile.close();
		return true;
	}
}