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
    batteryPercentage += 0.5*mins;
    if(batteryPercentage > 100)
    {
        batteryPercentage = 100;
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
    float kmsleft = batteryPercentage * 1/5;
    if(kmsleft > kms)
    {
        batteryPercentage = 0;
        emissions += kmsleft *74;
    }
    else
    {
        float BatteryUse = 0;
        int emissionUse = 0;
        BatteryUse += kms * 1/5;
        emissionUse += 74*kms;
        emissions += emissionUse;
        batteryPercentage -= BatteryUse;
    }
}


