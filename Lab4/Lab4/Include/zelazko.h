#pragma once 
#include <iostream>
#include <string>

class Zelazko{
    public:
    //set new temperature for iron to work
    void UstawTemperature(int new_temperature){
        if( new_temperature >max_temperature )
            std::cout<<"\n Ten model nie obsluguje takiego zakresu temperatur.";
        else
            current_temperature = new_temperature;
    
    };
    //return temperature for which iron is working right know for the another class, done to prevent another classes from changing the value
    int get_current_temperature(){
        return current_temperature;
    }
    //prints information about iron: name, price and working temperature
    void Wypisz(){
     std::cout<<"\n " << name<<" cena: " << price << ". Temperatura: " << current_temperature ;
    };
    protected:
    int current_temperature = 0;
    double price;
    int max_temperature=9;
   
    std::string name;
};

class ZelazkoPhilips : public Zelazko{
    public: 
    //creates iron, set price, max temperature that it can work, and name
    ZelazkoPhilips(double  listed_price){
        price = listed_price;
        max_temperature = 5;
        name = "Philips";
    };
 

};

class ZelazkoTefal : public Zelazko{
    public: 
    //creates iron, set price, max temperature that it can work, and name
    ZelazkoTefal(double  listed_price){

        price = listed_price;
        max_temperature = 7;
        name = "Tefal";
    };
 

};