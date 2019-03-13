#include "../include/StudentsBase.hpp"
#include <iostream>
#include <algorithm>

void StudentsBase::showBase()
{
    if(studentBase.empty() != true)
    {
        for(const Student& student : studentBase)
        {
            std::cout<< " First name: "<< student.getFirstName();
            std::cout<< " Last name: "<< student.getLastName();
            std::cout<< " Index: "<< student.getIndexNumber() << std::endl;
        }
    }else
        std::cout<< "Empty students base" << std::endl;
}
void StudentsBase::addStudent(Student* student)
{
    studentBase.push_back(*student);
}
void StudentsBase::sortByIndexAsc(bool variant)
{
    std::sort(studentBase.begin(), studentBase.end());    
}
void StudentsBase::removeStudent(const int index)
{
    auto studentToRemove = std::find_if(studentBase.begin(), studentBase.end(),[&index](const Student& student)->bool
            {
                return (student.getIndexNumber() == index) ? true : false;
            });
    studentBase.erase(studentToRemove);

}


