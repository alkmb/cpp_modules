#include "../includes/Serialization.hpp"

Serialization::Serialization() {
    std::cout << "Default constructor has been called" << std::endl;
}

Serialization::Serialization(const Serialization &src) {
    *this = src;
    std::cout << "Copy constructor has been called" << std::endl;
}

Serialization &Serialization::operator=(const Serialization &rhs) {
    if (this != &rhs) {
        // No member variables to copy
    }
    return *this;
}

Serialization::~Serialization() {
    std::cout << "Destructor called" << std::endl;
}

unsigned long Serialization::serialize(Data* ptr) {
    return reinterpret_cast<unsigned long>(ptr);
}

Data* Serialization::deserialize(unsigned long raw) {
    return reinterpret_cast<Data*>(raw);
}