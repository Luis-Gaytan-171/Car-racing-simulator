#ifndef BALANCED_H
#define BALANCED_H

#include "Car.h"

class Balanced : public Car {
private:
    int stability; // Rango: 1 - 100

public:
    // Constructor
    Balanced(int enginePower, int stability, string name);

    // Getter y Setter de stability
    int getStability() const;
    void setStability(int stability);

    // Sobrescritura del método calculateScore
    int calculateScore(int driverExperience, int driverRisk) const override;
};

#endif // BALANCED_H
