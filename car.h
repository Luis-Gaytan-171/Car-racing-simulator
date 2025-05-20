#include <string>
#ifndef CAR_H
#define CAR_H

class Car{
    
    protected:
        int engine_power;
        std::string name;
        int tire_type;

    public:
        Car();
        Car(int eng, std::string nam){
            engine_power = eng;
            name = nam;
        }
        
        int get_engine();

        std::string get_name();

        void set_engine(int);

        void set_name(std::string);

        virtual int calculate_score(int);


};


Car::Car(){
    engine_power = 0;
    name = "";
    tire_type = 0;
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

void Car::set_name(std::string nam){
    name = nam;
}

int Car::calculate_score(int sco){
    tire_type = sco;
}

int Car::calculate_score(int sco) {
    tire_type = sco;
    return tire_type;
}


#endif
