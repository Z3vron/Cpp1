#pragma once 

#include <iostream>
#include "Data.h"
#include <algorithm>
#include <functional>

struct Compar{
    int column_help;
    Compar(int column) : column_help(column){}
    bool operator()(Data first, Data second)  { 
        return first.Get_value(column_help) < second.Get_value(column_help); 
    }
};
class Table {
    public:
        Table() = default;
        
        Table& sort(int column){
            if(column >= _Table.size()) {
                std::cout << "\n Indeks " << column << " nieprawidlowy\n";
                return *this;
            }

            Compar comparator(column);
            std::sort(_Table.begin(), _Table.end(), comparator);
            return *this;
        }
        Table& sortBy(std::function<bool(const Data&, const Data&)> comparator){
            std::sort(_Table.begin(), _Table.end(), comparator);
            return *this;
        }
        void print(){
            for(auto& day : _Table){
                day.print();
            }
        }
        Table& operator+=(const Data& day){
            _Table.push_back(day);
            return *this;
        }

    private:
        std::vector<Data> _Table;
};


