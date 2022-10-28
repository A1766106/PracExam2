#include "Ford.h"
#include "Car.h"
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int Ford::nextVinNumber=2000002;

Ford::Ford(int badgeNumber, int price)
{
    this->price = price;
    emissions = 0;
    this->badgeNumber = badgeNumber;
    vinNumber = nextVinNumber;
    nextVinNumber++;
    litresOfFuel = 60;
}
void Ford::refuel(int litres)
{
    litresOfFuel += litres;
}
void Ford::set_badgeNumber(int b)
{
    badgeNumber = b;
}
int Ford::get_BadgeNUmber()
{
    return badgeNumber;
}
int Ford::get_litresOfFuel()
{
    return litresOfFuel;
}
void Ford::set_litresOfFuel(int l)
{
    litresOfFuel = l;
    if(litresOfFuel<0)
    {
        litresOfFuel = 0;
    }
}
void Ford::drive(int kms)
{
    float kmsleft = litresOfFuel * 0.2;
    if(kmsleft < kms)
    {
        litresOfFuel = 0;
        emissions += kmsleft *234;
    }
    else
    {
        float fuelUse = 0;
        int emissionUse = 0;
        fuelUse += kms * .2;
        emissionUse += 234*kms;
        emissions += emissionUse;
        litresOfFuel -= fuelUse;
    }
}