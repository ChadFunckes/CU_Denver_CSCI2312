// Chad S Funckes
// CSCI 2312

// This file is the definition of the class fishstock.
// The purpose of this file is to:
// 1. Find the volume of a lake given input file parameters.
// 2. Determine the stocking level of the lake at 1 fish per 1000 cubic feet of water.
// 3. Output the monthly data on the decrease of fish population over a 6 month 
//    season if 100 fish per month are taken from the lake and output that data to a file.
//
// PRECONDITION:  A file must be specified by the driver program, by string of by char*.
//		This file must contain positive numerical values delimited by a return, EX:
//      10
//		20
//		15
//		etc...
//
// POSTCONDITION:  An output file (name specified by driver) will be created showing the number of
//		fish that should be stocked in the lake.  A second file (name specified by driver)
//		containing 6 values representing the number of fish remaining after each of the 6 months 
//		of the fishing season.
//
// DESCRIPTION OF FUNCTIONS:
//
//   CONSTRUCTORS:
//   +There is one default constructor, constructor sets all values to zero and uses a monthly decrease of 100 fish per month.
//   +There is one overloaded constructor, it takes an integer value if the user wishes to specify an alternate rate of decrease.
//
//   MODIFIERS:
//   +make_lake("filename") - Creates a lake from positive integer values taken from a file and calculates volume and loss over a 6 month period.
//     PRE-CONDITION: An input file name must be passed as a char* or specified.
//     POST-CONDITION: Function creates a bool return, if function returns a 1, then make_lake failed to utilize the file data and
//		the information in the class instance will be invalid.  A return of 0 indicates successful operation.
//      After execution all elements of the lake are filled (volume, decline).
//
//   +set_volume(int) - Allows the user to specify a volume without input taken from a file, then calculates loss over a 6 month period.
//     PRE-CONDITION:  An integer value must be entered representing the volume of the lake.
//     POST-CONDITION: Sets volume of lake and calculates the deline over a 6 month period.
//
//	 +write_volume() - Creates an output file of the name specified and write out a single integer value that represents the volume of the lake.
//     POST-CONDITION: Output file with a single integer output names total_fish.txt
//
//   +write_population() - Creates an output file of 6 integers representing the fish loss at the ends of 6 months of operation.
//	   POST-CONDITION: Output file with 6 lines of integer values named population_decrease.txt.

#include <vector>
#include <string>
#ifndef CHAD_FISHSTOCK
#define CHAD_FISHSTOCK
namespace chads_fishstock{

	class fishstock{
	public:
		// CONSTRUCTOR SECTION
		fishstock();
		fishstock(int&);
		// MUTATORS SECTION
		bool make_lake(const char*);
		void set_volume(const int&);
		// ACCESSOR SECTION
		void write_volume();
		void write_population();

	private:
		static const int MONTHS = 6;
		int loss_per_month;
		std::vector<int> points;
		int monthly_decrease[MONTHS];
		int volume;
		int totalFish;
		/// private member mutator functions ///
		void set_volume();
		void set_stock_level();
		void set_monthly_decrease();
	};
}
#endif