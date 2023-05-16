
#include "Character.hpp"
using namespace std;
using namespace ariel;


void Character :: setLocation (Point location) 
{ this->location = location; }
void Character :: setHitPoints (int points)
 { this->hitp = points; }
void Character :: setAlive (bool isalive)
 { this->alive = isalive; }
bool Character :: isAlive () const 
{ return this->alive; }
double Character :: distance (Character* other) const {
    return location.distance(other -> getLocation());
}
void Character :: hit (int amount) {
}
string Character :: getName () const 
{ return this->name; }
Point Character :: getLocation () const 
{ return this->location; }
int Character :: getHitPoints () const
 { return this->hitp; }
bool Character :: getInTeam () 
{ return this->inteam; }





