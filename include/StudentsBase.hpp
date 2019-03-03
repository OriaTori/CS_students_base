#pragma once 
#include <vector>
#include "Student.hpp"
#include <memory>

class StudentsBase
{
public:
    void addStudent(std::unique_ptr<Student> student);
    void sortByIndexAsc(bool variant);
    void removeStudent(int index);
    void showBase();
private:
    std::vector<std::unique_ptr<Student>> studentBase;    
};
