//*************************************************************************
// TITLE: 			   	STL Vectors Lab
// FILENAME:               GroceryList.cpp
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
#include "GroceryList.h"
#include "GroceryItem.h"
#include <iostream>
#include <list>
#include <time.h>
#include <vector>
using namespace std;
//*******************************************************************************
//             Definition of member functions for class Entry
//*******************************************************************************
list<GroceryItem> foodList;
list<GroceryItem>::iterator itr = foodList.begin();
list<string> dupePreventer;
list<string>::iterator dupeItr = dupePreventer.begin();

void GroceryList::listBuilder()
{
    foodList.insert(itr,GroceryItem("Eggs",1));
    foodList.insert(itr,GroceryItem("Milk",2));
    foodList.insert(itr,GroceryItem("Bread",3));
    foodList.insert(itr,GroceryItem("Soup",5));
    foodList.insert(itr,GroceryItem("Candy",6));
    foodList.insert(itr,GroceryItem("Fruit",3));
    foodList.insert(itr,GroceryItem("Pizza",2));
    foodList.insert(itr,GroceryItem("Butter",2));
    foodList.insert(itr,GroceryItem("Chips",4));
    foodList.insert(itr,GroceryItem("Coffee",7));
    foodList.insert(itr,GroceryItem("Cereal",5));
    foodList.insert(itr,GroceryItem("Jerky",6));
    foodList.insert(itr,GroceryItem("Peanuts",4));
    foodList.insert(itr,GroceryItem("Ground Beef",8));
    foodList.insert(itr,GroceryItem("Chicken",9));
} // END listBuilder()

void GroceryList::findInList()
{
    
    string choice;
    int i = 0;
    
    
    cout << "Here are a list of your choices: " << endl;
    for (itr = foodList.begin(); itr != foodList.end(); itr++)
    {
        cout << itr->getFoodItem() << endl;
    }
    while (i < 3)
    {
    
        cout << endl << "Please input one of the items above to get its location: ";
        cin >> choice;
        
        for (itr = foodList.begin(); itr != foodList.end(); itr++)
            {
                if (itr->getFoodItem() == choice)
                {
                    dupePreventer.push_back(itr->getFoodItem()); //Add choice to vector to prevent duplicates later on...
                    
                    cout << "You wanted to find " << itr->getFoodItem() << " which is located in aisle " << \
                    itr->getAisleNumber() << endl;
                }
            }
        i++;
    }
    moreYouMightWant();
} // END findInList()

void GroceryList::moreYouMightWant()
{
    //Variable used for duplicate preventer
    string dupeVar = " ";
    
    //Variables used to pick 6 random food items
    int foodPicker = 0;
    int count = 0;
    
    srand((unsigned) time(NULL));
    cout << endl;

    while (count < 6)
    {
        
    foodPicker = rand() % 10 + 1;
        
    for (itr = foodList.begin(); itr != foodList.end(); itr++)
    {
        //In the if statement below, whatever is output to the user is inserted into the dupPreventor list, the
        //for statement following this comment, iterates through the list and searches
        //for a value that has already been displayed to the user to ensure that the if statement
        //that outputs an item to the user is not repeated.
        
        for (dupeItr = dupePreventer.begin(); dupeItr != dupePreventer.end(); dupeItr++) {
            if (*dupeItr == itr->getFoodItem()) {
                dupeVar = *dupeItr;
            }
        }
        
        if (itr->getAisleNumber() == foodPicker && dupeVar != itr->getFoodItem())
        {
            cout << "You might also want to get some " << itr->getFoodItem() << " which is located in aisle " << \
            itr->getAisleNumber() << endl;
            dupePreventer.push_back(itr->getFoodItem());
            count++;
            break;
        }
    }
    }
} // END moreYouMightWant()



