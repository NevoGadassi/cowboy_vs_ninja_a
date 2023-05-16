#include <exception>
#include <iostream>
#include "Cowboy.hpp"
using namespace std;
using namespace ariel;

int Cowboy :: getBullets () const { return this->bullets; }
bool Cowboy :: hasboolets () const {
    return (this->bullets > 0);
}

void Cowboy :: shoot (Character* someone) {

}

void Cowboy :: reload () {

}

string Cowboy :: print () const {
    return "";
}

