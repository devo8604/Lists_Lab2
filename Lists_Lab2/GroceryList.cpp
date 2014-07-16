//
//  GroceryList.cpp
//  Lists_Lab2
//
//  Created by Devon Smith on 7/14/14.
//  Copyright (c) 2014 Devon Smith. All rights reserved.
//

#include "GroceryList.h"
#include "GroceryItem.h"
#include <iostream>
#include <list>
#include <time.h>
#include <vector>

using namespace std;

list<GroceryItem> foodList;
list<GroceryItem>::iterator itr = foodList.begin();


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
    
}

void GroceryList::findInList()
{
    
    string choice = "Cereal";
    int i = 0;
    
    for (itr = foodList.begin(); itr != foodList.end(); itr++)
    {
        cout << itr->getFoodItem() << endl;
    }
    while (i < 3)
    {
    
        cout << endl << "Please input one of the items above to get its location: ";
//DEBUG      cin >> choice;
    
        for (itr = foodList.begin(); itr != foodList.end(); itr++)
            {
                if (itr->getFoodItem() == choice)
                {
                    cout << "You wanted to find " << itr->getFoodItem() << " which is located in aisle " << \
                    itr->getAisleNumber() << endl;
                }
            }
        i++;
    }
    moreYouMightWant();
}

void GroceryList::moreYouMightWant()

{
    //Variables used for duplicate preventer
    vector<string> dupePreventer;
    string dupeVar = " ";
    
    //Variables used to pick 6 random food items
    int foodPicker = 0;
    int count = 0;
    
    
    srand((unsigned) time(NULL));
    
    while (count < 6)
    {
        
    foodPicker = rand() % 10;
        
    for (itr = foodList.begin(); itr != foodList.end(); itr++)
    {
        //In the if statement below, whatever is output to the user is inserted in vector, the
        //for statement following this comment, loops through the vector and searches
        //for a value that has already been display to the user to ensure that the if statement
        //that outputs an item to the user is not repeated.
        for (int dupeItr = 0; dupeItr < dupePreventer.size(); dupeItr++)
        {
            if (dupePreventer[dupeItr] == itr->getFoodItem())
            {
                dupeVar = itr->getFoodItem();
                break;
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
}



