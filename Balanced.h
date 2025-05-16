#ifndef BALANCED_H
#define BALANCED_H

#include "Car.h"

class Balanced : public Car {
private:
    int stability; // 1 - 100
public:
    // Constructor
    Balanced(int enginePower, int stability);

    // Getter y Setter de stability
    int getStability() const;
    void setStability(int stability);
};

#endif // BALANCED_H
