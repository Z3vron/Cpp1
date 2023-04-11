#pragma once 
#include <iostream>

//klasa abstrakcyjna


class Node{

    public: 

        virtual std::string toString() const = 0;
        virtual Node * clone() const = 0;
        void Set_Next_Element(Node * parameter){
            _next_element = parameter;
        };
        Node * return_next() const {
            return _next_element;
        };
       
        virtual ~Node() = default;

    protected:

        Node* _next_element;

};
















 
    
  
