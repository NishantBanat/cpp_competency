#include <iostream>
using namespace std;
#include "car.h"


int main()
{
    Car carObj(2023, "Daimler", 20);
    int year = carObj.getReleaseYear();
    string customer = carObj.getCustomer();
    int speed = carObj.getSpeed();
    cout << year << "\n" ;
    cout << customer << "\n" ;
    cout << speed << "\n" ;

    carObj.accelerate();
    carObj.accelerate();
    carObj.accelerate();
    carObj.accelerate();
    carObj.accelerate();
    speed = carObj.getSpeed();
    cout << "Current speed after acceleration : " << speed << "\n" ;

    carObj.brake();
    carObj.brake();
    carObj.brake();
    carObj.brake();
    carObj.brake();
    speed = carObj.getSpeed();
    cout << "current speed after braking : " << speed << "\n" ;

    return 0;
}
