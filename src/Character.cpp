#ifndef __CHARACTER_CPP__
#define __CHARACTER_CPP__
#include "..\headers\Character.h"

Character::Character()
{
    this->xPos = 0.0;
    this->yPos = 0.0;

    this->name = "";
    this->level = 0;
    this->exp = 0;
    this->expNext = 0;

    this->strength = 0;
    this->vitality = 0;
    this->dexterity = 0;
    this->intelligence = 0;

    this->hp = 0;
    this->hpMax = 0;
    this->stamina = 0;
    this->staminaMax = 0;
    this->damageMin = 0;
    this->damageMax = 0;
    this->defense = 0;
    this->luck = 0;

    this->statPoints = 0;
    this->skillPoints = 0;
}

Character::~Character()
{
    
}

void Character::initialize(const string name)
{
    this->xPos = 0.0;
    this->yPos = 0.0;

    this->name = name;
    this->level = 1;
    this->exp = 0;
    //documentación de static_cast*
    this->expNext = static_cast<int>((0.04 * level * level * level) 
                    + (0.8 * level * level)
                     + 2 *level);
    
    this->strength = 5;
    this->vitality = 5;
    this->dexterity = 5;
    this->intelligence = 5;
    
    this->hp = 10;
    this->hpMax = 10;
    this->stamina = 10;
    this->staminaMax = 10;
    this->damageMin = 1;
    this->damageMax = 4;
    this->defense = 1;
    this->luck = 1;

    this->statPoints = 0;
    this->skillPoints = 0;

}

void Character::printStats() const
{
    cout << "= Character Sheet =" << endl;
    cout << "= Name: " << this->name << endl;
    cout << "= Level: " << this->level << endl;
    cout << "= Exp: " << this->exp << endl;
    cout << "= Exp to next level: " << this->expNext << endl;

    cout << endl;
    cout << "= Strength: " << this->strength << endl;
    cout << "= Vitality: " << this->strength << endl;
    cout << "= Dexterity: " << this->strength << endl;
    cout << "= Intelligence: " << this->strength << endl;

    cout << endl;
    cout << "= HP: " << this->hp << "/" << this->hpMax << endl;
    cout << "= Stamina: " << this->stamina << "/" << this->staminaMax << endl;
    cout << "= Damage: " << this->damageMin << " - " << this->damageMax << endl;
    cout << "= Defense: " << this->defense << endl;
    cout << "= Luck: " << this->luck << endl;
    cout << endl;
}

void Character::levelUp()
{
    while (this->exp >= this->expNext)
    {
        this->exp -= this->expNext;
        this->level++;
        this->expNext = static_cast<int>((0.04 * level * level * level) 
                    + (0.8 * level * level)
                     + 2 *level);
        
        this->statPoints++;
        this->skillPoints++;
    }
}

#endif