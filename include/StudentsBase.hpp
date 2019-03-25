#pragma once 
#include <vector>
#include "Student.hpp"
#include <memory>

class StudentsBase
{
public:
    void addStudent(std::unique_ptr<Student> student);
    void sortByIndexAsc();
    void removeStudent(const unsigned int index);
    void showBase();
private:
    std::vector<std::unique_ptr<Student>> studentBase;    
};
