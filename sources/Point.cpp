
#include "Point.hpp"
#include <iostream>
#include <math.h>
using namespace ariel;
using namespace std;


double Point :: distance (Point other) const {
    return sqrt(pow(x - other.getX(), 2) + pow(y - other.getY(), 2));
}


Point Point :: moveTowards (Point source, Point dest, double dist) {
    return Point(4,5);
}

string Point :: toString () const {
    string info;
    info = "(" +  to_string(x) + ", " +  to_string(y) + ")";
    return info;
}
void Point :: print () const {
    cout << "(" << x << ", " << y << ")";
}