#pragma once 
#include <vector>
#include "Student.hpp"

class StudentsBase
{
public:
    void addStudent(Student* student);
    void sortByIndexAsc();
    void removeStudent(int index);
    void showBase();
private:
    std::vector<Student> studentBase;    
};
