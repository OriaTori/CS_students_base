#include "../include/StudentsBase.hpp"
#include <iostream>

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

}
void StudentsBase::removeStudent(int index)
{
    void StudentsBase::removeStudent(int index)
        {
            if(index < studentBase.size())
            {studentsBase.erase(studentsBase.begin() + index);
            }else
            std::cout << "Index is out of bound";
        }
}


