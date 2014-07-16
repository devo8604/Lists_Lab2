//*************************************************************************
// TITLE: 			   	STL list Lab
// FILENAME:               lab2.cpp
// PREPARED FOR:             CS230
// PROGRAMMER(S):           Devon J. Smith
// DEVELOPMENT DATE:     	07/14/14
// COMPILER USED:            Apple LLVM Version 5.1
// TARGET PLATFORM:         Mac OS X i386 & x86_64
//=================================================================
//                           PROJECT FILES
//    <LIST ALL PROGRAM AND HEADER FILES IN THE PROJECT HERE>
//		lab2.cpp (main)
//		GroceryItem.h
//		GroceryItem.cpp
//		GroceryList.h
//		GroceryList.cpp
//=================================================================
//   		REVISION HISTORY
//   List revisions made to the Program
//
//   DATE     PROGRAMMER            DESCRIPTION OF CHANGES MADE
//	 07/14/14 Devon J. Smith        Original
//
//=================================================================
//
//=================================================================
//   			PROGRAM DESCRIPTION
//
//  This program builds a list of 15 grocery store objects with the fooditem and aislelocation attributes.
//  The list of items available is printed out at which point the user can pick and item to find its location,
//  which is then printed out. At the end, six more items random, with their locations, are printed out.
//  There is also a vector used in this program that stores user choices so that they are not duplicated
//  when the program generates its output of six random items.
//
// INPUTS: Three food items
//
// OUTPUTS:  The three items that the user input is output along with their locations.
//           six random items and thier locations are output as well.
//
//=================================================================
//                          INCLUDE FILES
#include "GroceryList.h"
#include <iostream>
//
//=================================================================
//                        CONSTANT DEFINITIONS
//                             NONE
//
//=================================================================
//                      EXTERNAL CLASS VARIABLES
//                          NONE
//=================================================================
//
//*************************************************************************
//                     BEGINNING OF PROGRAM CODE
//*************************************************************************
int main(int argc, const char * argv[])
{
    GroceryList shop;
    shop.listBuilder();
    shop.findInList();
    return 0;
}
//=================================================================
//                     PROGRAM OUTPUT
//
/*
 Here are a list of your choices:
 Eggs
 Milk
 Bread
 Soup
 Candy
 Fruit
 Pizza
 Butter
 Chips
 Coffee
 Cereal
 Jerky
 Peanuts
 Ground Beef
 Chicken
 
 Please input one of the items above to get its location: Soup
 You wanted to find Soup which is located in aisle 5
 
 Please input one of the items above to get its location: Cereal
 You wanted to find Cereal which is located in aisle 5
 
 Please input one of the items above to get its location: Candy
 You wanted to find Candy which is located in aisle 6
 
 You might also want to get some Jerky which is located in aisle 6
 You might also want to get some Ground Beef which is located in aisle 8
 You might also want to get some Milk which is located in aisle 2
 You might also want to get some Chips which is located in aisle 4
 You might also want to get some Eggs which is located in aisle 1
 You might also want to get some Coffee which is located in aisle 7
*/




