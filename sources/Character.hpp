

#ifndef CHARACTER_H
#define CHARACTER_H
#include "Point.hpp"
#include <string>
#include <iostream>


namespace ariel {
    class Character {
    private:
        std :: string name;
        Point location;
        int hitp;
        bool alive;
        bool inteam;

    public:
        
        Character (const  std :: string name, Point location, int points) :
            name(name), location(location), hitp(points), alive(true), inteam(false) {}

         ~Character() = default;
        void setAlive (bool alive);
        void setLocation (Point x);
        void setHitPoints (int hit);
        bool isAlive () const;
        double distance (Character* someone) const;
        void hit (int num);
        std :: string getName () const;
        Point getLocation () const;
        int getHitPoints () const;
        bool getInTeam ();
        
        virtual std :: string print () const = 0;
    };
}

#endif 