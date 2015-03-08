// Chad S Funckes
// SCSI 2312
// File: piglatin.h
//
// Definition of pglatin class
/*
CONSTRUCTORS
piglatin()
post condition: Two char pointers set to null

piglatin(char*)
post condition: original char array created the sizeof the input string and pointer original set to the array.  The pointer 
				for the piglatin version of the word is set to null.

MODIFIERS
char* word_convert();
pre-condition: There must be a word pointed to by original.
post condition: The word in the original array is changed to piglatin, the array pointed to by piggy is created to hold this word.

ACCESSORS
char* display_original() const
post condition: The value pointed to by original is returned.

char* display_converted() const
post condition:  The value pointed to by piggy is returned.

FRIENDS
std::ostream& operator <<(std::ostream& outs, const piglatin& source)
post condition: two output statements, first that says what the original word was, second the piglatin version.
*/


#ifndef FUNCKES_PIGLATIN
#define FUNCKES_PIGLATIN
#include <iostream>
namespace FUNCKES_PA3 {

class piglatin{

public:
/// CONSTRUCTORS ///
	piglatin();
	piglatin(char*);
	~piglatin();

/// MODIFIERS SECTION ///
char* word_convert();

/// ACCESSOR SECTION
char* display_original() const;
char* display_converted() const;

/// friends declaration ///
friend std::ostream& operator <<(std::ostream& outs, const piglatin& source);

/// PRIVATE MEMBER DATA ///
private:
	char* original;
	char* piggy;
};
}
#endif
