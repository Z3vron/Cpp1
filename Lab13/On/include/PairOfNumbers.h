#pragma once
#include <iostream>


template<typename T1, typename T2>
class PairOfNumbers{
    public:
        PairOfNumbers(T1& first_number, T2& second_number):first(first_number),second(second_number){};
        T1& first;
        T2& second;

        PairOfNumbers<T2,T1> Swapped(){
            PairOfNumbers<T2,T1> temp(second,first);
            return temp;
        };
        // Print number dodnt change object
        void Print()const {
            std::cout<<"\n Print method: " << first << " " << second << std::endl;
        }
        //Add same number to both numbers in pair
        void Add( int number_to_add){
            first += number_to_add;
            second += number_to_add;
        }
        //Scale both numbers in pair by the same ammount
        void Scale(int number_to_scale){
            first *= number_to_scale;
            second *= number_to_scale;
        }
        // print info about non const objects
        void Info(){
            std::cout<< "\n This is NON-const pair of numbers \n";
        }
        // print info about  const objects
        void Info() const{
            std::cout<< "\n This is const pair of numbers \n";
        }
        





};