//
//  GroceryList.h
//  Lists_Lab2
//
//  Created by Devon Smith on 7/14/14.
//  Copyright (c) 2014 Devon Smith. All rights reserved.
//

#ifndef __Lists_Lab2__GroceryList__
#define __Lists_Lab2__GroceryList__

#include "GroceryItem.h"
#include <iostream>
#include <list>

#endif /* defined(__Lists_Lab2__GroceryList__) */

class GroceryList
{
    
public:
    
    void listBuilder();
    void findInList();
    void moreYouMightWant();
    
private:
    
    std::list<GroceryItem> foodList;
    std::list<GroceryItem>::iterator itr = foodList.begin();
    
};
