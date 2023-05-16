#include "doctest.h"
#include "sources/Team.hpp"
#include "sources/Team2.hpp"
#include "sources/SmartTeam.hpp"

using namespace ariel;
using namespace std;
#include <math.h>


TEST_CASE("Distance ") {
    Point a(17, 2),b(15, 33),c(0, 0), d(2, 2);
    CHECK(a.distance(b) == b.distance(a));
    CHECK(c.distance(d) == sqrt(8));
    CHECK(d.distance(c) == sqrt(8));
    CHECK(c.distance(c) == 0);
}

TEST_CASE("Hit") {
    Point A (5, 2);
    Point B (10, 2);
    Cowboy nevo ("Nevo", A);
    Cowboy tom ("Tom", B);
    CHECK_THROWS(nevo.hit(-1));
    CHECK_NOTHROW(nevo.hit(0));
    tom.hit(100);
    CHECK(tom.isAlive() == true);
    nevo.hit(111);
    CHECK(tom.isAlive() == false);

}
TEST_CASE("Shoot") {
  Cowboy gavi("Gavi", Point(-1.5, 2));
    Cowboy pedri("Pedri", Point(1.5, 2));
    CHECK_EQ(gavi.getHitPoints(), 100);
    CHECK(pedri.hasboolets());
    gavi.shoot(&pedri);
    CHECK_EQ(pedri.getHitPoints(), 90);
    CHECK(gavi.hasboolets());
    gavi.shoot(&pedri);
    gavi.shoot(&pedri);
    gavi.shoot(&pedri);
    gavi.shoot(&pedri);
    gavi.shoot(&pedri);
    CHECK(!gavi.hasboolets());
    gavi.reload();
    CHECK(gavi.hasboolets());

}


 TEST_CASE("Move towards")
{
    Point p1=Point::moveTowards(Point(0, 0), Point(100, 0), 5);
    Point p2=Point::moveTowards(Point(-9, 0), Point(-9, -10), 5);
    CHECK_EQ(p1.getX(),5);
    CHECK_EQ(p1.getY(),0);
    CHECK_EQ(p2.getX(),-9);
    CHECK_EQ(p2.getY(),-5);


}
TEST_CASE("Teams"){
    Cowboy gavi("gavi",Point(0,0));
    Team barca(&gavi);
     CHECK_THROWS(Team(&gavi));
    CHECK_THROWS(Team2(&gavi));
    CHECK_THROWS(SmartTeam(&gavi));
    Cowboy messi("messi",Point(0,0));
    Cowboy srgio("srgio",Point(0,0));
    Cowboy xavi("xavi",Point(0,0));
    Cowboy pedri("pedri",Point(0,0));
    Cowboy balda("balda",Point(0,0));
    Cowboy kounde("kounde",Point(0,0));
    Cowboy ter("ter",Point(0,0));
    Cowboy piqa("piqa",Point(0,0));
    Cowboy ronald("ronald",Point(0,0));

    barca.add(&messi);
    barca.add(&srgio);
    barca.add(&xavi);
    barca.add(&pedri);
    barca.add(&balda);
    barca.add(&kounde);
    barca.add(&ter);
    barca.add(&piqa);
    barca.add(&ronald);
    Ninja newninja("new",Point(2,1),150,10);
    CHECK_THROWS(barca.add(&newninja));
    CHECK_EQ(barca.stillAlive(),10);

}




