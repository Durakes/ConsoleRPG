#ifndef __CHARACTER_H__
#define __CHARACTET_H__

#include "..\src\Inventory.cpp"

using namespace std;
class Character
{
    private:
        double xPos;
        double yPos;

        string name;
        int level;
        int exp;
        int expNext;
        
        int strength;
        int vitality;
        int dexterity;
        int intelligence;
        
        int hp;
        int hpMax;
        int stamina;
        int staminaMax;
        int damageMin;
        int damageMax;
        int defense;
        int luck;

        int statPoints;
        int skillPoints;

    public:
        //Constructor
        Character();
        virtual ~Character();

        // Functions

        void initialize(const string name);
        void printStats() const;
        void levelUp();

        //Accessors
        inline const double& getX() const {return this->xPos;}
        inline const double& getY() const {return this->yPos;}

        inline const string& getName() const {return this->name;}

        inline const int& getLevel() const {return this->level;}
        inline const int& getExp() const {return this->exp;}
        inline const int& getExpNext() const {return this->expNext;}
        inline const int& getHP() const {return this->hp;}
        inline const int& getHPMax() const {return this->hpMax;}
        inline const int& getStamina() const {return this->stamina;}
        inline const int& getDamageMin() const {return this->damageMin;}
        inline const int& getDamageMax() const {return this->damageMax;}
        inline const int& getDefense() const {return this->defense;}

};

#endif