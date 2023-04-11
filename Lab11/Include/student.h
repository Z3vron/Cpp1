#pragma once 
#include <string>
#include "school.h"
#include <vector>
#include <iostream>


class Student{

    public: 
        Student(std::string name,int points,std::vector<School*> data):_Student_name(name),_Student_points(points),_School_list_to_get(data){}

    void print(){
       std:: cout<< _Student_name << ": " << _Student_points <<" [" ;
       for(int i=0;i<_School_list_to_get.length();i++){
           std::cout << " " _School_list_to_get(i);
       }
       std::cout<<" ] -->";
       if(_School_in == nullptr)
            std::cout <<"nieprzyjety";
    }

    private: 
        std::string _Student_name;
        int _Student_points;
        std::vector<School> _School_list_to_get;
        School* _School_in;

};