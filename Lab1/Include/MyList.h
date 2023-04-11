#pragma once
#include <iostream>
#include <vector>

class MyList{

    
    public:
    // vector przechowujacy dane - lista
     std::vector <int> _dimensions_vector;

    //konstruktor domyslny 
    MyList(){
        std::vector <int> data;
        _dimensions_vector = data;
    }
    //konstruktor jednoargumentowy
    Mylist(int size);
    //funkcje skladowe
    bool empty();
    int size();
    void print();

    private:
       


};