#pragma once

#include "FileSystemNode.h"

using FSN = FileSystemNode;

class File: public FSN{
    public:
        File(const std::string& word): FSN(word) {}
        std::string Return_info() const override {
            return Return_name() + " (FILE)";
        }
        void print(std::ostream& output, const std::string& before) const {
            output << before << Return_info() << std::endl;
        }
};