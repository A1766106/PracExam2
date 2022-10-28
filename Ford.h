#ifndef FORD_H
#define FORD_H
#include "Car.h"
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Ford:public Car{
    private:
        static int nextVinNumber;
    protected:
        int badgeNumber;
        float litresOfFuel; 
    public:
        Ford();            
        Ford(int badgeNumber, int price);
        void refuel(int litres); 
        void set_badgeNumber(int b);
        int get_BadgeNUmber();
        float get_litresOfFuel();
        void set_litresOfFuel(int l);
        void drive(int kms);

};

#endif