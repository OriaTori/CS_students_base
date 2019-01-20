#include <iostream>
#include "../include/StudentsBase.hpp"
#include "../include/Student.hpp"

int main()
{
    StudentsBase base;
    Student* student = new Student(200,"Pet","Simson");
    Student stud(111,"John","Johnson");
    base.addStudent(&stud);
    base.addStudent(student);
    student = new Student(102,"Ben","Jonhson");
    base.addStudent(student);
    student = new Student(222,"John","Smith");
    base.addStudent(student);
     
    base.showBase();
    base.sortByIndexAsc(true);
    std::cout<< "\n After sort "<< std::endl;
    base.showBase();
    base.removeStudent(111);
    std::cout << "\n After remove 200111" << std::endl;
    base.sortByIndexAsc(true);
    base.showBase();
    
    student = NULL;
    return 0;
}
