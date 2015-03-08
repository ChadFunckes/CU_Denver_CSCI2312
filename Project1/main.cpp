/* Chad Funckes
	CSCI 2312
	
	PROGRAM DESCRIPTION: THIS PROGRAM USES A CLASS NAMED fishstock TO READ IN A SERIES ON INTEGERS FROM A FILE
	THAT REPRESENT DEPTHS IN A LAKE.  THE FILE THAT THE PROGRAM READS IN, IS SPECIFIED AT THE COMMAND LINE AND
	PASSED TO THE CLASS THROUGH ARGV[1].  ALL ERROR HANDLING FOR READING IN THE FILE IS HANDLED BY THE CLASS.

	THE CLASS TAKES IN THE DATA POINTS AND CALCULATES THE VOLUME OF A LAKE AND THEN THE NUMBER OF FISH THAT SHOULD
	BE STOCKED IN THE LAKE BASED UPON 1 FISH PER EVERY 1000 CUBIC FEET OF WATER.  THEN WRITES THE VOLUME OF THE LAKE 
	TO THE FILE NAMED total_fish.txt.  THEN OUTPUTS TO A FILE NAMED population_decrease.txt
	THE EXPECTED LEVEL OF FISH FOR 6 MONTHS OF OPERATION ASSUMING A LOSS OF 100 FISH PER MONTH.

	PRECONDITION:  THE FILE MUST BE RUN WITH AN ARGUMENT THAT REPRESENTS THE NAME OF THE FILE TO BE READ IN.

	POSTCONDITION: TWO EXPORTED FILES, ONE CONTAINING THE TOTAL VOLUME OF THE LAKE AND ONE CONTAINING 6 INTEGER VALUES
	THAT REPRESENT THE POPULATION OF FISH AFTER 6 MONTHS OF OPERATION.
*/

#include <iostream>
#include <fstream>
#include "fishstock.h"
//using namespace std;
using namespace chads_fishstock;

int main (int argc, char** argv){
	/// PRE-TEST //// Test if a file name was specified before any operations occur.  If none then display msg and exit.
	if (argc < 2){ 
		std::cout << "You must specify a file name to use this program, ex: 'PA1 testfile.txt'\n";
		return 0;}
	
	fishstock lake1; 

	/// If statement creates lake and checks success via bool value returned from class func.  If failed exit program.
	if (lake1.make_lake(argv[1]) == 1)
		return 0;

	lake1.write_volume(); /// writes volume data to file specified
	lake1.write_population(); /// writes population decline data to file specified
	return 0;
}