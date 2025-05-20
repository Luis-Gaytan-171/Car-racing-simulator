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

        int calculate_score();

        int get_score(int);

        int calculate_score(int) override;

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

int Speed::calculate_score(int sco) {
    tire_type = sco + 3;
    return tire_type;
}



#endif
