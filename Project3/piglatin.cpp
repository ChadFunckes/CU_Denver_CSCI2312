// Chad S Funckes
// SCSI 2312
// File: piglatin.h
//
// Implementaion of the class piglatin
// for documentation see pglatin.h

#include <iostream>
#include "piglatin.h"
#include <cassert>
#include <cstring>
using namespace std;

namespace FUNCKES_PA3{
	/// CONSTRUCTORS ///
	piglatin::piglatin(){
		original = NULL;
		piggy = NULL;
	}

	piglatin::piglatin(char* input){
	original = new char[strlen(input)+1]; // initialize char* from definition as a pointer to a new array of char big enough to hold the input.
	strcpy(original,input);// copy contents of incomming char[] pointer to class's original pointer.
	}

	///DESTRUCTORS ///
	piglatin::~piglatin(){
	delete []original;
	original=NULL;
	delete []piggy;
	piggy=NULL;
	}

	/// MODIFIER SECTION ///
	char* piglatin::word_convert(){
	assert(original != NULL); // check to make sure original is not empty.
	char *build = new char[strlen(original)+5]; // create array used to make the word, array is sized for the original input + the piglatin letters
	char *first_letter = new char[strlen(original)+2];  // array needed to grab the first letter to rotat till the end, sized for the input + a '-'.
	if (original[0] != 'a' && original[0] != 'e' && original[0] != 'i'&& original[0] != 'o'&& original[0] != 'u'){ // if first letter is not a vowell
			strcpy(build, original); // copied original word into build
			strcat(build, "-");		 // then adds a -
			while (build[0] != 'a' && build[0] != 'e' && build[0] != 'i'&&build[0] != 'o'&&build[0] != 'u'){ // repeat until a vowell is found
				strcpy(first_letter, build); // copies p into new char fisrt_letter.
				first_letter[1] = '\0'; // terminates the new char string after the first letter.
				memmove(&build[0], &build[1], strlen(build) - 0); // take off the first letter.
				strcat(build, first_letter); // adds the first_letter to p.
			}
			strcat(build, "ay"); // adds ay after the word no longer starts with a consonant.
			piggy = new char[strlen(build)+1]; // creates the array for piggy the size of the new string
			strcpy(piggy, build); // fills piggy with the completed word.
		}
	else { // if the word starts with a vowel
		strcpy(build, original);  // copies original into build
		strcat(build, "-way");	 // adds -way onto the word
		piggy = new char[strlen(build)+1]; // creates piggy array size of the new word
		strcpy(piggy, build); // fills piggy with the new word
		}
// delete all of the memory used by the funtion and no longer needed		
	delete[] build;
	build = NULL;
	delete[] first_letter;
	first_letter = NULL;
	
	return piggy;
	}

	/// ACCESSOR FUNCTIONS ///
	char* piglatin::display_original() const{
	 return original;
	}

	char* piglatin::display_converted() const{
	return piggy;
	};
	
	//// overloaded operator ///
	ostream& operator <<(ostream& outs, const piglatin& source){
		outs << "The original word was: " << source.original << endl;
		outs << "The piglatin worid is: " << source.piggy << endl;
		return outs;
	}
}
