#include "MyList.h"
#include <iostream>
#include <vector>

MyList::MyList(int size){
    int m=0;
    std::vector <int> data;
    for(int i=0;i<size;i++)
        data.push_back(m++);
     _dimensions_vector = data;    
}
bool MyList::empty(){
    if(this->_dimensions_vector.size == 0)
        return true;
    else
        return false
}
int MyList::size(){
    return this->_dimensions_vecotr.size;
}
void MyList::print(){
    std::cout << "[";
    for (int i=0;i<this->_dimensions_vector.size;i++)
        std:: cout<<_dimensions_vector[i];
    std::cout << "]";
}