#pragma once 
#include <iostream>
#include "PairOfNumbers.h"
#include <vector>

template <typename T>
class RangeArray{
    public:
        //constructor for the vector based on pair
        RangeArray(PairOfNumbers<int,double>& pair_numbers) : _Start(pair_numbers.first),_End(pair_numbers.second){
            _Size = abs(pair_numbers.first) + abs (pair_numbers.second);
            for(int i=0;i<_Size;i++)
                _Data.push_back(0);
        };
        //Return size of vector
        int Size()const {
            return _Size;
        }
        T& operator [](int number){
            return _Data.at(number-_Start);
        }
        double At(int number){
            return _Data[number- _Start];
        }


    private:
        int _Start{0},_End{0},_Size{0};
        std::vector<double> _Data;




};