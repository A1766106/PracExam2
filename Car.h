#ifndef CAR_H
#define CAR_H
#include <string.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Car{
    protected:
        int price;
        int vinNumber;
        int emissions;

    public:
        Car();
        Car(int price);
        virtual void drive(int kms) = 0;
        void set_price(int p);
        int get_price();
        void set_vinNumber(int v);
        int get_vinNumber();
        void set_emissions(int e);
        int get_emissions();
};

#endif