#include "Car.h"
#include <string.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

Car::Car(){}
Car::Car(int price)
{
    this->price = price;
    emissions = 0;
}
void Car::set_price(int p)
{
    price = p;
}
int Car::get_price()
{
    return price;
}
void Car::set_vinNumber(int v)
{
    vinNumber = v;
}
int Car::get_vinNumber()
{
    return vinNumber;
}
void Car::set_emissions(int e)
{
    emissions = e;
}
int Car::get_emissions()
{
    return emissions;
}