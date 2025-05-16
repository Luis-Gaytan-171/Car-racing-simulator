#ifndef DURABLECAR_H
#define DURABLECAR_H

#include "car.h"
#include <string>

class DurableCar : public Car {
private:
    int durability;

public:
    DurableCar(std::string name, int enginePower, int durability);

    int getDurability() const;
    void setDurability(int durability);
};

#endif

