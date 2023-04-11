#pragma once 
#include <iostream>
#include "Primitive.h"

class Sum: public Primitive{
    private:
        Primitive *ptr1;
        Primitive *ptr2;

   
    public:
    Sum()=default;
        Sum(Primitive& object_1,Primitive& object_2){
            ptr1 = &object_1;
            ptr2 = &object_2;
        }

        void PrintWithValue() final{
            //std::cout<<" Sum ";
            std::cout<<" (";
            ptr1->Print_number();
            std::cout<<"+";
            ptr2->Print_number();
            std::cout<<") = "<<return_number();
        }
        double return_number() final{
        
            return ptr1->return_number() + ptr2->return_number();
        }
        void Print_number() final {
            std::cout<<"(";
            ptr1->Print_number();
            std::cout<<"+";
            ptr2->Print_number();
            std::cout<<")";
        }

    

};