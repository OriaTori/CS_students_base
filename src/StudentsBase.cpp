#include "../include/StudentsBase.hpp"
#include <iostream>

void StudentsBase::showBase()
{
    if(studentBase.empty() != true)
    {
        for(const auto & student : studentBase)
        {
            std::cout<< " First name: "<< student->getFirstName();
            std::cout<< " Last name: "<< student->getLastName();
            std::cout<< " Index: "<< student->getIndexNumber() << std::endl;
        }
    }else
        std::cout<< "Empty students base" << std::endl;
}
void StudentsBase::addStudent(std::unique_ptr<Student> student)
{
    studentBase.emplace_back(std::move(student));
}
void StudentsBase::sortByIndexAsc(bool variant)
{

}
void StudentsBase::removeStudent(int index)
{

}


