#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include <string>
using namespace std;


class Car {

public:
    int ReleaseYear;
    string customer;
    int speed;

public:
    Car(int, std::string, int);
    int getReleaseYear();
    string getCustomer();
    int getSpeed();

    void accelerate();
    void brake();

};

#endif // CAR_H_INCLUDED
