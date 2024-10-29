#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <string>
#include "Data.hpp"

class Serialization {
    private:
        Serialization();
        Serialization(const Serialization &src);
        Serialization &operator=(const Serialization &rhs);
        ~Serialization();

    public:
        static unsigned long serialize(Data* ptr);
        static Data* deserialize(unsigned long raw);
};

#endif