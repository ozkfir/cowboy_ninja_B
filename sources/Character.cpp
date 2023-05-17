#include <iostream>
#include "Character.hpp"
using namespace std;


using std::cout; using std::endl;

void Character::set_inteem() {
    IN_TEEM= true;
}
Character::Character(string name_,Point point,int hit,int kind_): IN_TEEM(false),kind(kind_),p(point),hit_point(hit),name(name_){}

bool  Character::isAlive(){
    if(hit_point>0)
        return true;
    return false;
}

int Character::getkind() {
    return this->kind;
}

double Character::distance(Character * player){
    return player->getLocation().distance(this->getLocation());
}

void Character::hit(int num){
    if(num<0){throw invalid_argument("");}
    if (hit_point<=num){hit_point=0;}
    else
        hit_point-=num;
}

string Character::getName(){
    return name;
}

Point Character::getLocation(){
    return p;
}
void Character::setLocation(Point point){
    this->p=point;
}
Character::~Character() {}

