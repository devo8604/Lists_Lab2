//
//  GroceryItem.h
//  Lists_Lab2
//
//  Created by Devon Smith on 7/14/14.
//  Copyright (c) 2014 Devon Smith. All rights reserved.
//

#ifndef __Lists_Lab2__GroceryItem__
#define __Lists_Lab2__GroceryItem__

#include <iostream>
#include <string>

class GroceryItem
{
    
public:
    GroceryItem();
    GroceryItem(std::string foodItem, int aisleNumber);
    std::string getFoodItem();
    int getAisleNumber();
    
private:
    
    //Variables
    std::string foodItem;
    int aisleNumber;
    
    //Getters and Setters
    void setFoodItem(std::string item);
    void setAisleNumber(int aisle);
    
    
};

#endif /* defined(__Lists_Lab2__GroceryItem__) */
