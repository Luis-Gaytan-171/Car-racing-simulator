#ifndef DURABLE_H
#define DURABLE_H

#include "Car.h"

class Durable : public Car {
private:
    int durability; // Rango: 1 - 100

public:
    // Constructor
    Durable(int enginePower, int durability, string name);

    // Getter y Setter de durability
    int getDurability() const;
    void setDurability(int durability);

    // Sobrescritura del método calculateScore
    int calculateScore(int driverExperience, int driverRisk) const override;
};

#endif // DURABLE_H
