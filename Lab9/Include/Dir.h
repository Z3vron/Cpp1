#pragma once

#include "FileSystemNode.h"
#include <vector>

using FSN = FileSystemNode;

class Dir: public FSN{
    private:

        std::vector<FSN*> _data;

    public:

        Dir(const std::string& name): FSN(name) {}
        ~Dir(){
            std::cout << "Deleting Dir: " << Return_name() << std::endl;
            for(auto* el: _data){
                std::cout << "About to delete " << el->Return_name() << std::endl;
                delete el;
            }
        }

        
        std::vector<FSN*> Return_data() const {
            return _data;
        }
        std::string Return_info() const override {
            return Return_name() + " (DIR)";
        }
        std::vector<FSN*>& Return_data() {
            return _data;
        }
        void add(FSN* element){
            _data.push_back(element);
        }
        void operator+=(FSN* element){
            this->add(element);
        }
        Dir* findDir(const std::string& name) {
            if(Return_name() == name)
                return this;
            for(auto* el: _data){
                Dir* dir = dynamic_cast<Dir*>(el);
                if(dir)
                    return dir->findDir(name);
            }
            return nullptr;
        }
        FSN* get(const std::string& name){
            if(Return_name() == name)
                return this;
            for(auto* el: _data){
                if(el->Return_name() == name)
                    return el;
                Dir* dir = dynamic_cast<Dir*>(el);
                if(dir){
                    FSN* temp = dir->get(name);
                    if(temp)
                        return temp;
                }
            }
            return nullptr;
        }
        void print(std::ostream& output, const std::string& before) const override {
            output << before << Return_info() << std::endl;
            for(auto *el: _data)
                el->print(output, before+"  ");
        }

};

std::ostream& operator<<(std::ostream& output, const Dir& dir){
    dir.print(output, " ");
    return output;
}