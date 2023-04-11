#pragma once 

#include <iostream>

class Sum {
    public:
        Sum(const double number) : _Value(number){}
        double value() const {return _Value;}
        void operator()(double value){ _Value += value;}

    private:
        double _Value;
};