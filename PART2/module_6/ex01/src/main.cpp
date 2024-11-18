#include "../includes/Serialization.hpp"
#include "../includes/Data.hpp"

int main()
{
    Data data;
    data._name = "Example";
    data._value = 42;

    unsigned long raw = Serialization::serialize(&data);
    Data* deserializedData = Serialization::deserialize(raw);

    std::cout << "Original Data: " << data._name << ", " << data._value << std::endl;
    std::cout << "Deserialized Data: " << deserializedData->_name << ", " << deserializedData->_value << std::endl;

    return 0;
}