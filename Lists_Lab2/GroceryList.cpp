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

using namespace std;

list<GroceryItem> foodList;
list<GroceryItem>::iterator itr = foodList.begin();

void GroceryList::listBuilder()
{
    foodList.insert(itr,GroceryItem("Eggs",1));
    foodList.insert(itr,GroceryItem("Milk",2));
    foodList.insert(itr,GroceryItem("Bread",3));
    foodList.insert(itr,GroceryItem("Soup",5));
    foodList.insert(itr,GroceryItem("Candy",16));
    foodList.insert(itr,GroceryItem("Fruit",30));
    foodList.insert(itr,GroceryItem("Pizza",12));
    foodList.insert(itr,GroceryItem("Butter",2));
    foodList.insert(itr,GroceryItem("Chips",40));
    foodList.insert(itr,GroceryItem("Coffee",17));
    foodList.insert(itr,GroceryItem("Cereal",15));
    foodList.insert(itr,GroceryItem("Jerky",16));
    foodList.insert(itr,GroceryItem("Peanuts",4));
    foodList.insert(itr,GroceryItem("Ground Beef",6));
    foodList.insert(itr,GroceryItem("Chicken",6));
    
}

void GroceryList::findInList()
{
    
    string choice;
    int i = 0;
    
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

    
    
}



