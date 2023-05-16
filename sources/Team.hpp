
#ifndef TEAM_H
#define TEAM_H
#include "Cowboy.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include <vector>


const int MAX_NUM_OF_WARRIORS = 10;

namespace ariel {
    
  class Team
    {
    protected:
        std::vector<Ninja *> ninjafighters;
        std::vector<Cowboy *> Cowboyfighters;
        Character *leader;
        int maxfighters = 10;
        int SizeNinja;
        int SizeCowboys;


    public:
        Team(Character *leader);
        ~Team();
         void add(Ninja *member);
         void add(Cowboy *member);
        virtual void attack(Team *other);
        int stillAlive();
        Character* getLeader(){return leader;}
        virtual void print() const ;
        
    };
}
#endif 