#ifndef TESLA_H
#define TESLA_H
#include "Car.h"
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Tesla:public Car{
    private:
        static int nextVinNumber;
    protected:
        char model;
        float batteryPercentage; 

    public:
        Tesla();
        Tesla(char model, int price);
        void chargeBattery(int mins); 
        void set_model(char m);
        char get_model();
        void set_batteryPercentage(float b);
        float get_batteryPercentage();
        void drive(int kms);
};

#endif