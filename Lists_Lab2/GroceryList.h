//*************************************************************************
// TITLE: 			   	STL Vectors Lab
// FILENAME:               GroceryList.h
// PREPARED FOR:             CS230
// PROGRAMMER(S):           Devon J. Smith
// DEVELOPMENT DATE:     	07/14/14
// COMPILER USED:            Apple LLVM Version 5.1
// TARGET PLATFORM:         Mac OS X i386 & x86_64
//=================================================================
//   		REVISION HISTORY
//   List revisions made to the Program
//
//   DATE     PROGRAMMER            DESCRIPTION OF CHANGES MADE
//	 07/14/14 Devon J. Smith        Original
//
//=================================================================
//                        CLASS DESCRIPTION
//  This class builds the list of grocerystore items with their location.
//  It also handles user input to search for items within the list, an finally
//  it generates a list of six non duplicate random items with thier locations.
//
//*******************************************************************************
//
//*******************************************************************************
//              PROCESS THIS FILE ONLY ONCE PER PROJECT
//
#ifndef __Lists_Lab2__GroceryList__
#define __Lists_Lab2__GroceryList__
//
//======================================================================
//                     CONSTANT DEFINITIONS
//
//*******************************************************************************
//                  STANDARD AND USER DEFINED INCLUDES
#include "GroceryItem.h"
#include <iostream>
#include <list>
#include <vector>
//*******************************************************************************
//                     USER DEFINED DATA TYPES
class GroceryList
{
    
public:
    
    void listBuilder(); //Fills a list with 15 GroceryItem objects
    void findInList();  //Takes user input to find objects
    
    
private:
    //Variables
    std::list<GroceryItem> foodList;
    std::list<GroceryItem>::iterator itr = foodList.begin();
    std::vector<std::string> dupePreventer;
    
    void moreYouMightWant(); //Searches list and displays 6 random objects
};
//*******************************************************************************
//                    END OF CONDITIONAL BLOCK
#endif /* defined(__Lists_Lab2__GroceryList__) */
//*******************************************************************************
//                      END OF HEADER FILE
//*******************************************************************************