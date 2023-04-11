#pragma once 
#include <string>
#include <vector>
#include "student.h"

class School{
    public:
       // School(std::string name, int number):_Max_people(number), _School_name(name){}
        /*
        std::string getclass(){
            return _School_name;
        }
        int getmax(){
            return _Max_people;
        }
        void print(){
            if(_Approve_students_list.length() == 0){
                std::cout << "brak przyjetych";
            }
        }
        */

        
    private:
        std::string _School_name;
        int _Max_people;
        std:: vector<Student*> _Approve_students_list;
};