#pragma once 
#include <iostream>
#include <string>
#include "math.h"

 //funkcja sprawdzajaca czy przekazana liczba jest liczba pierwsza, jezeli tak to zwraca true inaczej false
bool Pierwsza(int Number){
    if (Number==1 || !Number ) {
        return false;
    }
    for(int i=2;i<=sqrt(Number > 0 ? Number: -Number);i++) {
        if (!(Number%i))
            return false;
    }
    return true;
}

namespace num{

    template<typename T, int Size>
    //srednia z tablicy przekazanej po ref - jeden arg - tablica
    double srednia(const T (&ref)[Size]) {
        double Avg_result = 0;
        for(int i=0;i<Size;i++) {
            Avg_result += ref[i];
        }
        return Avg_result/Size;
    }
    template<typename T>
      //srednia z tablicy przekazanej po wskazniku - dwa arg - tablia i jej rozmiar
    double srednia(const T *ptr, int Size) {
        double Avg_result = 0;
        for(int i=0;i<Size;i++) {
            Avg_result += ptr[i];
        }
        return Avg_result/Size;
    }
    template<int Begin,int END,int Number>
    //sprawdza czy wszytkie liczby z przekazanej tablicy w podanym zakresie sa pierwsze ,dwa arg - tablia i jej rozmiar
    bool czyWszystkiePierwsze(const int (&arr)[Number],int Size){
        if(END > Size  ||END < Begin  || Begin < 0){
            std::cout<<"Nieprawidlowy zakres!\n";
            return false;
        }
        for(int i = Begin;i<END;i++){
            if (Pierwsza(arr[i])) continue;
            return false;
        }
        return true;
    }
    std::string text(bool Number){
        if(Number)
            return "True";
        else 
            return "False";
       
    }   
   
  
}


 











