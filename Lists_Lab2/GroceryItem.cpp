//
//  GroceryItem.cpp
//  Lists_Lab2
//
//  Created by Devon Smith on 7/14/14.
//  Copyright (c) 2014 Devon Smith. All rights reserved.
//

#include "GroceryItem.h"
#include <iostream>
#include <string>

using namespace std;

string foodItem;
int aisleNumber;

GroceryItem::GroceryItem() {}

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