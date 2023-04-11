#include <iostream>
#include "school.h"

School :: School(std::string name, int number):_Max_people(number), _School_name(name){}

School :: std::string getclass(){
    return _School_name;
}
School::int getmax(){
    return _Max_people;
}
School::void print(){
    if(_Approve_students_list.length() == 0){
        std::cout << "brak przyjetych";
    }
    else{
        for(int i=0;i<_Approve_students_list.length(),i++)
            std::cout<<"\n " << _Approve_students_list(i);
    }
}