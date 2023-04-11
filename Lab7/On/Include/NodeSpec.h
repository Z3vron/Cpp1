#pragma once 
#include <iostream>
#include <string>
#include "Node.h"



class NodeInt : public Node {
  
  public:
 
    
    NodeInt(int number){
      _number = number;
    }
    Node * clone() const {
      Node * element = new NodeInt(_number);
      return element;
    }
    int valInt()  {
      return _number;
    }
    std::string toString() const {
      return std::to_string(_number);
    };
   

  private:
  
    int _number;
};


class NodeFloat : public Node {

  public:
    
    NodeFloat(float number){
      _number = number;
    }
    Node * clone() const {
      Node * element = new NodeFloat(_number);
      return element;
    };
    float valFloat()  {
      return _number;
    }
    std::string toString() const {
      return std::to_string(_number);
    }
    

  private:
   
    float _number;
};

class NodeString : public Node {

  public:
   
    NodeString(std::string number){
      _number = number;
    }
    Node * clone() const {
      Node * element = new NodeString(_number);
      return element;
    };
    std::string & valString(){
      return _number;
    };
    std::string toString() const {
      return _number;
    }
    

  private:
   
    std::string _number;
};