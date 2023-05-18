#include <iostream>
#include "car.h"
using namespace std;

Car::Car(int releaseYear, std::string customerInput, int speedInput)
{
    ReleaseYear = releaseYear;
    customer = customerInput;
    speed = speedInput;
}

int Car::getReleaseYear()
{
    return ReleaseYear;
}

string Car::getCustomer()
{
    return customer;
}

int Car::getSpeed()
{
    return speed;
}

void Car::accelerate()
{
    speed = speed + 10;
}

void Car::brake()
{
    if (speed <= 0)
    {

    }
    else
    {
         speed = speed - 10;
    }

}
