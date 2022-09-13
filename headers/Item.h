#ifndef __ITEM_H__
#define __ITEM_H__

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Item
{
    private:
        string name;
        int buyValue;
        int sellValue;
    public:
        Item(/* args */);
        virtual ~Item();
};


#endif