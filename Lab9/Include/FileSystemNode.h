#pragma once 

#include <string>
#include <iostream>


class FileSystemNode{
    protected:
        std::string _file_name;
    
    public:
        FileSystemNode():FileSystemNode("None"){}
        FileSystemNode(const std::string& name): _file_name(name){}
        virtual ~FileSystemNode() = default;
        std::string Return_name() const {
            return _file_name;
        }
        void Set_name(std::string name){
            _file_name = name;
        }
        virtual void print(std::ostream& output, const std::string& before) const = 0;
        virtual std::string Return_info() const = 0;


};


std::ostream& operator<<(std::ostream& output, const FileSystemNode& fsn){
    output <<std::endl<<  (&fsn)->Return_info() << std::endl;
    return output;
}













    
  