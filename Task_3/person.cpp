#include "person.h"
#include <iostream>
Person::Person(std::string name, int age)
{
    name_ = name;
    age_ = age;
}

Person::Person(const Person& other)
{
    name_ = other.name_;
    age_ = other.age_;
    std::cout << "Copy constructor called" << std::endl;
}
