
#ifndef TRAINEDNINJA_H
#define TRAINEDNINJA_H
#include "Ninja.hpp"


namespace ariel {
    class TrainedNinja : public Ninja {

    public:
        TrainedNinja (const std :: string name, Point location) :
                Ninja(name, location, 120, 12) {}
    };
}

#endif 
