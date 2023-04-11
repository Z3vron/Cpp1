#pragma once 
#include <iostream>

class DivisibleBy{
    
    public:

    DivisibleBy(int number){
        _base_number = number;
    }
    // przeladowuje operator nawiasowy tak by ten zwracal czy dana liczba daje przy dizeleniu przez liczbe podana przy konstruktowaniu obiektu reszte 0 czy 1 (true lub false)
    bool operator()(int number){
        return (number%_base_number)==0;
    }

    private:
        int _base_number;

};
class GreaterThan{

    public:
    
    GreaterThan(int number){
        _base_number = number;
    }
    //przeladowuje operator nawiasowy tak by ten zwrcal czy dana liczba jest wieksza od liczby bazowej zadanej przy kontruktowaniu obiektu(true lub false)
    bool operator()(int number){
        return (number>_base_number);
    }

    private:
        int _base_number;

};