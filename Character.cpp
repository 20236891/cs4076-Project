#include "Character.h"

using std::string;

Character::Character(){ }

Character::~Character(){ }

Character::Character(string name, int health, int hitChance) :
    name(name), health(health), hitChance(hitChance){ }



string Character::getName()const{
    return this->name;
}

int Character::getHitChance()const{
    return this->hitChance;
}

int Character::getHealth()const{
   return this->health;
}

void Character::setHealth(int newHealth){
    this->health = newHealth;
}
