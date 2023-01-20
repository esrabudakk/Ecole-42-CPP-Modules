//
// Created by Esra Budak on 1/20/23.
//
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main(void)
{
    Data test;
    uintptr_t ptr;

    std::cout << "Address of 'test' variable " << &test << std::endl;
    ptr = serialize(&test);
    std::cout << "Serialized 'test' variable :" << ptr << std::endl;
    std::cout << "Address of 'test' variable :" << &test << std::endl;
    std::cout << "Deserialized uintptr_t :" << deserialize(ptr) << std::endl;
}