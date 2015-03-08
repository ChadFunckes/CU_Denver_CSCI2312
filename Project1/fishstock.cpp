// Chad S Funckes
// CSCI 2312
// fishstock class implementation file.

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "fishstock.h"
using namespace std;
using namespace chads_fishstock;

fishstock::fishstock(){
	volume = 0;
	totalFish = 0;
	loss_per_month = 100;
	for (int i = 0; i < MONTHS; i++){
		monthly_decrease[i] = 0;}
};
fishstock::fishstock(int& loss){
	volume = 0;
	totalFish = 0;
	loss_per_month = loss;
	for (int i = 0; i < MONTHS; i++){
		monthly_decrease[i] = 0;}
};
bool fishstock::make_lake(const char* fileName){
	ifstream file;
	file.open(fileName);
	char testpoint[50];
	int num;
	
/// Check is file passed from driver is open, if not display error msg and return bool 1
	if (!file){  
		cout << "The File you specified was not found.  Proper use of program is 'PA1 filename.txt' \n"
			<< "Please check your file name and try again\n";
		return 1;}
	
/// Read input into vector points ///
	while (!file.eof()){
		file >> testpoint;

//TEST IF THE VALUE INPUT INTO CHAR ARRAY TESTPOINT IS A DIGIT, IF NOT DISPLAY ERR AND RETURN BOOL 1.
		if (!isdigit(testpoint[0]) || testpoint < 0){ 
			cout << "Data in input file in invalid.  Data must be positive integer values, seperated by line breaks\n"
				 << "For Example:\n10\n25\n30\n5\netc...\n"
				 << "Please correct the data file and try again\n";
			return 1;}	
	
// CHANGE CHAR ARRAY INTO INT VALUE AND ADD TO POINTS VECTOR
		num = atoi(testpoint); 	
		points.push_back(num);
	}
	file.close();
	set_volume();
	return 0;
};
void fishstock::set_volume(){
	int width = 200 * (points.size()-1);
	int size = points.size();

	for (int i = 0; i < size-1; i++) 
		volume += 200 * max(points[i], points[i + 1]);

	volume = volume * width; 
	set_stock_level();
};
void fishstock::set_volume(const int& v){
	volume = v;
	set_stock_level();
};
void fishstock::set_stock_level(){
	totalFish = volume / 1000;
	set_monthly_decrease();
};
void fishstock::set_monthly_decrease(){
	int fishLevel = totalFish;

	for (int i = 0; i < MONTHS; i++){
		fishLevel = fishLevel - loss_per_month;
		monthly_decrease[i] = fishLevel;}
};
void fishstock::write_volume(){
	ofstream outFile;
	outFile.open("total_fish.txt");
	outFile << volume;
	outFile.close();
};
void fishstock::write_population(){
	ofstream outFile;
	outFile.open("population_decrease.txt");
	for (int i = 0; i < MONTHS; i++){
		outFile << monthly_decrease[i] << endl;}
};