# CU_Denver_CSCI2312
My Class Files for CU Devner csci2312

This directory is my reposity for my homework assignments in CSCI 2312 
All Programs in the this folder are done in C++

Project 1 -
THIS PROGRAM USES A CLASS NAMED fishstock TO READ IN A SERIES ON INTEGERS FROM A FILE
THAT REPRESENT DEPTHS IN A LAKE.  THE FILE THAT THE PROGRAM READS IN, IS SPECIFIED AT THE COMMAND LINE AND
PASSED TO THE CLASS THROUGH ARGV[1].  ALL ERROR HANDLING FOR READING IN THE FILE IS HANDLED BY THE CLASS.

THE CLASS TAKES IN THE DATA POINTS AND CALCULATES THE VOLUME OF A LAKE AND THEN THE NUMBER OF FISH THAT SHOULD
BE STOCKED IN THE LAKE BASED UPON 1 FISH PER EVERY 1000 CUBIC FEET OF WATER.  THEN WRITES THE VOLUME OF THE LAKE 
TO THE FILE NAMED total_fish.txt.  THEN OUTPUTS TO A FILE NAMED population_decrease.txt
THE EXPECTED LEVEL OF FISH FOR 6 MONTHS OF OPERATION ASSUMING A LOSS OF 100 FISH PER MONTH.

PRECONDITION:  THE FILE MUST BE RUN WITH AN ARGUMENT THAT REPRESENTS THE NAME OF THE FILE TO BE READ IN.

POSTCONDITION: TWO EXPORTED FILES, ONE CONTAINING THE TOTAL VOLUME OF THE LAKE AND ONE CONTAINING 6 INTEGER VALUES
THAT REPRESENT THE POPULATION OF FISH AFTER 6 MONTHS OF OPERATION.

Project 2 -
This program uses the quadratic class to set up two quadratic equations
The user enters two diffent sets of coefficients
The expressions are then added togather and the result is diplayed
The expressions are then subtracted and the result is displayed
The expressions are multiplied and the end result is displayed
The user then enters one number for x, to see the resulting quadratic results
The real roots of the quadratics are displayed.

Project 3 -
This program takes a word from the user and turns it into piglatin using the class piglatin.

Project 4 -
This program takes in an input file specified from the command line, pre-formattted IAW instructions
and creates and dynamic array of college_person class objects (which is inherited from class person)
and then creates the proper output to a file specified my the user.  Correct command line usage
of the file is PA4 input.txt output.txt

Purpose is to deal with basic class inheritance

Project 6 -
This program creates a class for dynamic array, similar to manually writing a vector datatype.

Project 7 -
This program is a simple program that adds and subtracts from an account, the purpose is to show how to use
custom exception classes and inheritance (extentions of exception classes)

