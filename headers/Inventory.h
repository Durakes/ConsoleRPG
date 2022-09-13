#ifndef __INVENTORY_H__
#define __INVENTORY_H__

#include "..\src\Item.cpp"

class Inventory
{
    private:
        int cap;
        int nrOfItems;
        Item **itemArr;
        void expand();
        void initialize(const int from);
    public:
        Inventory(/* args */);
        ~Inventory();
        void addItem(const Item &item);
        void removeItem(int index);
};

#endif