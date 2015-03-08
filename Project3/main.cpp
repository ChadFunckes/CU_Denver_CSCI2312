// Chad S Funckes
// SCSI 2312
// File: piglatin.h
//
// Driver file for the piglatin program
/*
This program takes a word from the user and turns it into piglatin using the class piglatin.

*/

#include <iostream>
#include <string>
#include "piglatin.h"

using namespace std;
using namespace FUNCKES_PA3;


int main(){

	char *string_input = new char[20]; // new char point to a charitor aray to be used as input of the original string;

	cout << "This program will take an input word from the user\n"
		 << "and convert it to pig latin\n";
	cin >> string_input;
	cin.ignore();
	//cin.get(string_input, 199, '\n'); // take in the word

	piglatin mypig(string_input); // create new piglatin obj called mypig, filled with input as original word

	mypig.word_convert(); // convert the word to piglatin

	cout << mypig; // cout the results using overloaded << operator.
	
	// delete memory for array used to take inputs from the user.
	delete[]string_input;
	string_input = NULL;
}
