//*************************************************************************
// TITLE: 			   	STL Vectors Lab
// FILENAME:               GroceryItem.h
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
#ifndef __Lists_Lab2__GroceryItem__
#define __Lists_Lab2__GroceryItem__
//
//======================================================================
//                     CONSTANT DEFINITIONS
//
//*******************************************************************************
//                  STANDARD AND USER DEFINED INCLUDES
#include <iostream>
#include <string>
//*******************************************************************************
//                     USER DEFINED DATA TYPES
class GroceryItem
{
    
public:
    //Constructor
    GroceryItem(std::string foodItem, int aisleNumber);
    
    //Getters
    std::string getFoodItem();
    int getAisleNumber();
    
private:
    
    //Variables
    std::string foodItem;
    int aisleNumber;
    
    //Setters
    void setFoodItem(std::string item);
    void setAisleNumber(int aisle);
};
//*******************************************************************************
//                    END OF CONDITIONAL BLOCK
#endif /* defined(__Lists_Lab2__GroceryItem__) */
//*******************************************************************************
//                      END OF HEADER FILE
//*******************************************************************************