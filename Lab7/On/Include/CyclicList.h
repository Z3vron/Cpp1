#pragma once 
#include <iostream>
#include "Node.h"
#include <string>



class CyclicList{

public:

    CyclicList() = default;

    CyclicList & operator<<(Node* element){
        if(_previous_element == nullptr)
            _previous_element = _next_element = element;
        else{
            _next_element -> Set_Next_Element(element);
            _next_element= element;
            _next_element -> Set_Next_Element(_previous_element);
        }
        return *this;
    }
     friend std::ostream& operator<<(std::ostream& os, const CyclicList& List){
      Node * help = List._previous_element;
      while(help != List._next_element){
        os << help->toString() << " ";
        help = help->return_next();
      }
      os << help->toString() << " ";
      return os;
    }
    Node * operator()()  {
      return _previous_element;
    }
    int count() const{
        
        int amount{0};
        if((_previous_element == nullptr && _next_element == _previous_element ))
            amount = 0;
        else   
            amount = 1;
       
        Node* help = _previous_element;
        while(help != _next_element){
            amount += 1;
            help = help->return_next();
        }
        return amount;

    }
   
    CyclicList & rotate(){
      _previous_element = _previous_element->return_next();
      _next_element = _next_element->return_next();
      return * this;
    }
    CyclicList & rotate_back(){
      Node * help = _previous_element;
      while(help->return_next() != _next_element)
        help = help->return_next();
      _next_element = help;
      _previous_element = help->return_next();
      return * this;
    }
    CyclicList(const CyclicList & second_list){
        
        Node * clonned;
        Node * help = second_list._previous_element;
        while(help != second_list._next_element){
            clonned = help -> clone();
            if(_previous_element == nullptr)
                _previous_element = _next_element = clonned;
            else {
                _next_element -> Set_Next_Element(clonned);
                _next_element = clonned;
                _next_element -> Set_Next_Element(_previous_element);
            }
            help = help->return_next();
        }
        clonned = help -> clone();
        _next_element -> Set_Next_Element(clonned);
        _next_element = clonned;
        _next_element -> Set_Next_Element(_previous_element);
    
    
    }

    private:

    Node* _previous_element = nullptr;
    Node* _next_element = nullptr;


};






/*
   
   
    CyclicList(const CyclicList & other){
      Node * help = other._previous_element;
      Node * clonned;
      while(help != other._next_element){
        clonned = help -> clone();
        if(_previous_element == nullptr){
          _previous_element = _next_element = clonned;
        } else {
          _next_element -> setNext(clonned);
          _next_element = clonned;
          _next_element -> setNext(_previous_element);
        }
        help = help->getNext();
      }
      clonned = help -> clone();
      _next_element -> setNext(clonned);
      _next_element = clonned;
      _next_element -> setNext(_previous_element);
    }
 
};*/