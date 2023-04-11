#pragma once 

#include <iostream>
#include <vector>
#include "Sum.h"
#include <iomanip>

class Data {
    friend Sum sumData(Data );

    public:
    Data() = default;
    Data(const std::string name, std::vector<double> values) : _Name(name), _Values(values){}
    void print() const{
        std::cout << _Name << "  ";
        for(auto& value : _Values){
            std::cout << value << std::setw(8);
        }
        std::cout << "\n\n";
    }
    double Get_value(int i) { return _Values[i];}

    private:
        std::string _Name;
        std::vector<double> _Values;
};

Sum sumData(Data date){
    double sum{0};
    for(auto& value : date._Values)
        sum += value;

    return Sum(sum);
}