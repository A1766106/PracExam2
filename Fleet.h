#ifndef FLEET_H
#define FLEET_H
#include "Ford.h"
#include "Car.h"
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Fleet{
    private:
        Fleet();
    protected:
        Car** fleet;
        int count;
    public:
        void addCar(Car *car);
        Car **get_fleet();
        int get_count();
        static Fleet* createFleet(int authority);

};

#endif