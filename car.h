#include <string>
#ifndef CAR_H
#define CAR_H

class Car{
    
    protected:
        int engine_power;
        std::string name;

    public:
        Car();
        Car(int eng, std::string nam){
            engine_power = eng;
            name = nam;
        }

        int get_engine();

        int get_name();

        void set_engine(int);

        void set_name(std::string);

};


Car::Car(){
    engine_power = 0;
    name = "";
}

int Car::get_engine(){
    return engine_power;
}

std::string Car::get_name(){
    return name;
}

void Car::set_engine(int eng){
    engine_power = eng;
}



#endif