#include <iostream>
#include <vector>
#include "school.h"
#include "student.h"

class Table{

    public:
        Table(std::vector<Student> Students):_Student_list(Students){}

        void sortpoints(){

        }
        void recruit(){
            
        }





    double getAverageStudScore(){
        double sum{0};
        Student uczen 
        foreach( uczen in _Student_list){
            sum+= _Student_list._Student_points;
        }
        return sum/_Student_list.length();
    }


    void printRecruit(){
        for(int i=0;i<_Shool_list;i++){
            _Shool_list(i).print();
        }
        

    }


    private:
        std::vector<School> _Shool_list;
        std:;vector<Student> _Student_list;


};