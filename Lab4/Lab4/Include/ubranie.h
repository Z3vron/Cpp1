#pragma once 
#include <iostream>
#include <string>
#include "zelazko.h"

class Ubranie{
    public:
    // set sleeve value to 0 - shirt has short sleeves 
    void SkrocRekawy(){
        if(sleeve == 0)
            std::cout<<" koszula juz ma krotkie rekawy";
        else 
            sleeve = 0;
    };
    //set ironed value to 1 - clothes are ironed
    void Prasuj(Zelazko iron){
        if(ironed == 1)
            std::cout << "\n Ubranie nie wymaga prasowania\n ";
        else{
            //check if iron temperature is to high for this shirt
            if(iron.get_current_temperature() <= max_temperature){
                std::cout<<"\n Prasuje " << name <<" zelazkiem o temp." <<iron.get_current_temperature();
                ironed = 1;
            }
            else
                std::cout << "\n Zelazko za gorace";
        }
    };
    //set edge value to 1  - chlothes edges are ironed
    void PrasujKanty(Zelazko iron){
        if(edge == 1)
            std::cout << "\n Ubranie ma kanty \n ";
        else{
            //check if iron temperature is to high for this jeans
            if(iron.get_current_temperature()<= max_temperature){
                std::cout<<"\n Prasuje nogawki " << name <<" zelazkiem o temp." <<iron.get_current_temperature();
                edge = 1;
            }
            else
                std::cout << "\n Zelazko za gorace";
        }
    };
    //set ironed value to 0 - clothes are smashed
    void Pogniec(){
        ironed =0;
    };
    //prints name of the clothes, their price  and information are they ironed
    void Wypisz(){
        std::cout<<"\n " << name<<" cena: " << price;
        if(ironed == 0)
            std::cout<<" pogniecione";
        else
            std::cout<<" wyprasowane";

    };
    protected:
    double price;
    int max_temperature = 9;
    std::string name;
    int sleeve=0;
    int ironed = 0;
    int edge = 0;
};

class KoszulaBawelniana : public Ubranie{
    public: 
    KoszulaBawelniana (double  listed_price,int listed_sleeve){
        max_temperature = 7;
        price = listed_price;
        sleeve = listed_sleeve;
        name = "Koszula bawelniana";
    };
     //prints name of the clothes, their price, length of the sleeve  and information are they ironed
    void Wypisz(){
        std::cout<<"\n " << name<<" cena: " << price ;
        if(ironed == 0)
            std::cout<<" pogniecione";
        else
            std::cout<<" wyprasowane";
        if(sleeve == 1)
            std::cout << " Dlugi rekaw.";
        else
            std::cout <<" Krotki rekaw.";
    };

};
class KoszulaJedwabna : public Ubranie{
    public: 
    KoszulaJedwabna (double  listed_price,int listed_sleeve){
        max_temperature = 3;
        price = listed_price;
        sleeve = listed_sleeve;
        name = "Koszula Jedwabna";
    };
    //prints name of the clothes, their price, length of the sleeve  and information are they ironed
    void Wypisz(){
        std::cout<<"\n " << name<<" cena: " << price ;
        if(ironed == 0)
            std::cout<<" pogniecione";
        else
            std::cout<<" wyprasowane";
        if(sleeve == 1)
            std::cout << " Dlugi rekaw.";
        else
            std::cout <<" Krotki rekaw.";
    };

};
class SpodnieBawelniane: public Ubranie{
    public:
    SpodnieBawelniane(double listed_price){
        price = listed_price;
        name = "Spodnie bawelnianie";
    }
    //prints name of the clothes, their price, are there any edges  and information are they ironed
    void Wypisz(){
        std::cout<<"\n " << name<<" cena: " << price ;
        if(ironed == 0)
            std::cout<<" pogniecione";
        else
            std::cout<<" wyprasowane";
        if(edge == 1)
            std::cout << " kanty.";
        else
            std::cout <<" brak kantow.";
    };

};
class SpodnieJedwabne: public Ubranie{
    public:
    SpodnieJedwabne(double listed_price){
        price = listed_price;
        name = "Spodnie jedwabne";
        

    }
    //prints name of the clothes, their price, are there any edges  and information are they ironed
    void Wypisz(){
        std::cout<<"\n " << name<<" cena: " << price ;
        if(ironed == 0)
            std::cout<<" pogniecione";
        else
            std::cout<<" wyprasowane";
        if(edge == 1)
            std::cout << " kanty.";
        else
            std::cout <<" brak kantow.";
    };
  

};