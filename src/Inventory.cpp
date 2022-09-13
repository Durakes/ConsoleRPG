#ifndef __INVENTORY_CPP__
#define __INVENTORY_CPP__

#include "..\headers\Inventory.h"

Inventory::Inventory()
{
    this->cap = 10;
    this->nrOfItems = 0;
    this->itemArr = new Item*[cap];
}

Inventory::~Inventory()
{
    //! size_t leer. 
    for(size_t i = 0; i < this->nrOfItems; i++)
    {
        delete this->itemArr[i];
    }

    delete[] itemArr;
}

void Inventory::expand()
{
    this-> cap *=2;
    Item **tempArray = new Item*[this->cap];

    for(size_t i = 0; i < nrOfItems; i++)
    {
        tempArray[i] = new Item(*this->itemArr[i]);
    }

    for (size_t i = 0; i < this->nrOfItems; i++)
    {
        delete this->itemArr[i];
    }

    delete[] this->itemArr;

    this->itemArr = tempArray;

    this->initialize(this->nrOfItems);
    
}

void Inventory::initialize(const int from)
{
    for(size_t i = from; i < this->cap; i++)
    {
        this->itemArr[i] = nullptr; //!Documentación
    }
}

void Inventory::addItem(const Item &item)
{
    if(this->nrOfItems >= this->cap)
    {
        expand();
    }

    this->itemArr[this->nrOfItems++] = new Item(item);
}

#endif