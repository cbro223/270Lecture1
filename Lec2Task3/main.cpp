#include <iostream>
#include <vector> 
#include "Student.h"
using namespace std;

int main() { 
    // Create a vector which as 260 elements allocated 
    vector<Student> students;
    // 260 elements allocated, this is as we will have 0 to 9 being starting with a, etc 
    students.reserve(260);


}

void AddStudent(std::string name, int id, std::vector<Student>& students)
{
    // Add student based on first letter of their last name
    
    students.push_back(Student(name, id));
}