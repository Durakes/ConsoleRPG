#include "..\headers\Character.h"

Character::Character()
{
    this->name = "";
    this->level = 0;
    this->exp = 0;
    this->expNext = 0;
    this->hp = 0;
    this->hpMax = 0;
    this->stamina = 0;
    this->damageMin = 0;
    this->damageMax = 0;
    this->defense = 0;
}

Character::~Character()
{

}

void Character::initialize(const string name)
{
    this->name = name;
    this->level = 1;
    this->exp = 0;
    this->expNext = (0.04 * level * level * level) 
                    + (0.8 * level * level)
                     + 2 *level;
    this->hp = 10;
    this->hpMax = 10;
    this->stamina = 10;
    this->damageMin = 1;
    this->damageMax = 4;
    this->defense = 1   ;
}