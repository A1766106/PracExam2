#include "Tesla.h"
#include "Car.h"
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int Tesla::nextVinNumber = 1000001;

Tesla::Tesla(){
    emissions = 0;
}
Tesla::Tesla(char model, int price)
{
    this->price = price;
    emissions = 0;
    this->model = model;
    batteryPercentage = 100;
    vinNumber = nextVinNumber;
    nextVinNumber++;
}
void Tesla::chargeBattery(int mins)
{
    if(batteryPercentage < 0)
    {
        batteryPercentage = 0;
    }
    batteryPercentage += 0.5*mins;
    if(batteryPercentage > 100)
    {
        batteryPercentage = 100;
    }
    if(batteryPercentage < 0)
    {
        batteryPercentage = 0;
    }
}
void Tesla::set_model(char m)
{
    model = m;
}
char Tesla::get_model()
{
    return model;
}
void Tesla::set_batteryPercentage(float b)
{
    batteryPercentage = b;
    if(batteryPercentage > 100)
    {
        batteryPercentage = 100;
    }
    if(batteryPercentage < 0)
    {
        batteryPercentage = 0;
    }
}
float Tesla::get_batteryPercentage()
{
    return batteryPercentage;
}
void Tesla::drive(int kms)
{

    // for (int i=0; i<kms; i++) 
    // {
    //     while (kms>0 && batteryPercentage>0) {
    //         emissions += 74;
    //         batteryPercentage -= 0.2;
    //         kms--;
    //     }
    // }
    // if (batteryPercentage<0) {
    //     batteryPercentage = 0;
    // }
    if (batteryPercentage*5 < kms)
    {
        batteryPercentage = 0;
        emissions += batteryPercentage*5 * 74;
    }
    else
    {
        emissions += kms*74;
        batteryPercentage -= kms*.2;
    }
}


