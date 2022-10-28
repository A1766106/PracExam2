#include "Fleet.h"
#include "Ford.h"
#include "Car.h"
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

Fleet::Fleet()
{
    count = 0;
    fleet= new Car*[5];
}
void Fleet::addCar(Car *car)
{
    fleet[count] = car;
}
Car **Fleet::get_fleet()
{
    return fleet;
}
int Fleet::get_count()
{
    return count;
}
Fleet* Fleet::createFleet(int authority)
{
    if(authority == 10)
    {
        Fleet *fleet = new Fleet;
        return fleet;
    }
    else
    {
        return NULL;
    }
}