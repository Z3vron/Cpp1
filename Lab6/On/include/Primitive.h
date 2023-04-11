#pragma once
#include <iostream>


class Abstract
{
    virtual void PrintWithValue();
    virtual double return_number();
};

class Primitive: public Abstract{
    protected:
     double _number;
    
    public:
    Primitive() = default;
    Primitive (double number){
        _number = number;
    }
    
    void PrintWithValue() override {
        std::cout << " ";
    }
    double return_number() override {
        return _number;
    }
    void Set(double number){
        _number = number;
    }
    virtual void Print_number(){
        std::cout << "  " << _number;
    }

   
};
