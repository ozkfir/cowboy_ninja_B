//
// Created by oz on 07/04/23.
//

#include "Ninja.hpp"
#include "Character.hpp"

void  Ninja::move(Character *enemy){
    this->setLocation(Point::moveTowards(this->getLocation(),enemy->getLocation(),this->speed));
}

void Ninja::slash(Character * enemy){
    if(!this->isAlive() || !enemy->isAlive()){throw runtime_error("");}
    if(this==character){throw runtime_error("");}///////////////////////&&? and in slash
    if(this->distance(enemy)<= 1 )
            enemy->hit(40);
}




Ninja::Ninja(string name,Point point,int h_p,int speed_):Character(name,point,h_p,NINJA_),speed(speed_){}
Ninja::~Ninja() {}


YoungNinja::YoungNinja(string name,Point point): Ninja(name,point,100,14){}
YoungNinja::~YoungNinja(){}



TrainedNinja::TrainedNinja(string name,Point point): Ninja(name,point,120,12){}
TrainedNinja::~TrainedNinja(){}


OldNinja::OldNinja(string name,Point point): Ninja(name,point,150,8){}
OldNinja::~OldNinja(){}

string YoungNinja::print(){return "YoungNinja "+getName();}
string OldNinja::print(){return "OldNinja "+getName();}
string TrainedNinja::print() {return "TrainedNinja "+getName();}