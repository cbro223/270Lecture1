#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#pragma once

class Student
{
public:
    Student(std::string name, int id);
    ~Student();
    std::string name_;
    int id_;


private:

};

#endif