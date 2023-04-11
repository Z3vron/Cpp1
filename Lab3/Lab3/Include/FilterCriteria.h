#pragma once 
#include <iostream>
#include <vector>
#include <functional>

class FilterCriteria{   
    
    public:
    //dodaje do wektora inne funkcje 
    void add(std::function<bool(int)>func ){
        _functions_data.push_back(func);
    } 
    // zwraca rozmiar wektora przechowujacego inne funckje
    int size(){
        return _functions_data.size();
    } 
    // zwraca elementy wektora przechowujacego inne funkcje 
    std::function<bool(int)> get(int i) const{
        return _functions_data[i];
    }

    private:
    
    std::vector<std::function <bool(int)>> _functions_data;
};