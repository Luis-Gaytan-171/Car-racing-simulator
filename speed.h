#include "car.h"
#include <string>
#ifndef SPEED_H
#define SPEED_H

class Speed : public Car{
    private:
        int speed;

    public:
        Speed();
        Speed(int eng, std::string nam, int spe);

        int get_speed();

        void set_speed(int);

};



Speed::Speed() : Car(){
    speed = 0;
}

Speed::Speed(int eng, std::string nam, int spe) : Car(eng, nam){
    speed = spe;
}

int Speed::get_speed(){
    return speed;
}

void Speed::set_speed(int spe){
    speed =spe;
}



#endif