#pragma once 
#include <iostream>
#include <vector>
#include <string>
#include <functional>
    

class List {

 public:
 //dodaje wartosc do wektora
    void insert(int value){
        _data.push_back(value);
    }
    //wyswietala wektor razem z stringiem 
    void print(std::string str) const{

        std::cout<<"\n " << str <<"[ ";
        for(int i=0;i<(int)_data.size();i++){
            std::cout<<_data[i] <<" ";
        }
        std::cout<<"]\n ";
    }
    //wyswietla samego wektora
     void print(){

        std::cout<<"\n [ ";
        for(int i=0;i<(int)_data.size();i++)
            std::cout<<_data[i]<<" ";
        std::cout<<"]\n";
    }
    //dodaje do nowo utworzonego elemntu klasy elementy o zdefiniowych wlasciwoscach przy uzuciu zewnetrznej funkcji
    List filter(std::function <bool(int)> func){
       
        List filtred_list;
        for(int i=0;i<(int)_data.size();i++){
            if(func(_data[i]))
           filtred_list.insert(_data[i]);
        }     
        return filtred_list;
    }   
    //przeladowuje operator [] by mozna bylo przy jego uzyciu dostac sie do elementu wektora w danym obiekcie klasy
    int& operator[](int argument_number){
      return _data[argument_number];
    }


 private:
   std::vector<int>_data;
};