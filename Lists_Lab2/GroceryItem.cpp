//*************************************************************************
// TITLE: 			   	STL Vectors Lab
// FILENAME:               GroceryItem.cpp
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
//*******************************************************************************
//                               CONSTANTS
//
//*******************************************************************************
//                  STANDARD AND USER DEFINED INCLUDES
#include "GroceryItem.h"
#include <iostream>
#include <string>

using namespace std;
//*******************************************************************************
//             Definition of member functions for class Entry
//*******************************************************************************
string foodItem;
int aisleNumber;

GroceryItem::GroceryItem(string foodItem, int aisleNumber)
{
    setFoodItem(foodItem);
    setAisleNumber(aisleNumber);
}

void GroceryItem::setFoodItem(string item)
{
    foodItem = item;
}

string GroceryItem::getFoodItem()
{
    return foodItem;
}

void GroceryItem::setAisleNumber(int aisle)
{
    aisleNumber = aisle;
}

int GroceryItem::getAisleNumber()
{
    return aisleNumber;
}