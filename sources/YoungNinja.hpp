
#ifndef YOUNGNINJA_H
#define YOUNGNINJA_H
#include "Ninja.hpp"



namespace ariel {
    class YoungNinja : public Ninja {

    public:
        // Constructors.
        YoungNinja (const std :: string name, Point location) :
                Ninja(name, location, 100, 14) {}
    };
}

#endif