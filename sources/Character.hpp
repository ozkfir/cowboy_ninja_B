#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "point.hpp"
using namespace std;
namespace ariel{}
#ifndef CHARACTER
#define CHARACTER
typedef enum  {COWBOY_ = 0, NINJA_=1} Result;

class Character{
    Point p;
    int hit_point;
    string name;
    int kind;
    bool IN_TEEM;

public:
    void set_inteem();
    Character(string name_,Point point,int hit,int kind);

    bool isAlive();

   double distance(Character * player);

   void hit(int num);
    int getkind();

    string getName();

    Point getLocation();
    virtual string print()=0;
    void setLocation(Point point);

~Character();


};
#endif
