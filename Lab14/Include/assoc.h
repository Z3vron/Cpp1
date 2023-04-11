#pragma once 

#include <iostream>
#include <string>
#include <map>

template<typename T_k, typename T_v>
class Assoc{

    public:
        void insert(T_k key, T_v value){
           data[key] = value;
        }
        void print(std::string prefix){
            for(auto i=data.begin();i != data.end();i++)
                std::cout<<" --- " <<  prefix << " --- klucz: " <<i -> first << " wartosc: " << i -> second <<"\n";
        }

        T_v &operator[](T_k key){
            return data[key];
        }
        T_v operator[]( T_k new_key) const{
            return data.at(new_key);
        }
        std::string contains(T_k key) const{
            for(auto i=data.begin();i != data.end();i++){
                if ( i-> first == key)
                    return "Znaleziono";
            }
            return "Nie znaleziono";
        }
    private:
        std::map<T_k,T_v> data;


};

std::string print(std::string str){
    return str;
}

std::string operator*(std::string word,int number ){
    std::string result = "";
    for(int i =0;i<number;i++){
        result+=word;
    }
    return result;
}
std::string operator*(int number,std::string word){
    return word * number;
}