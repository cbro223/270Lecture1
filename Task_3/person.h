#ifndef PERSON_H
#define PERSON_H
# include <string>
#pragma once

class Person
{
public:
    Person(std::string name, int age);
    Person(const Person& other);
std::string name_;
int age_;
private:

};

#endif