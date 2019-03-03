#include <iostream>
#include "../include/StudentsBase.hpp"
#include "../include/Student.hpp"

int main()
{
    StudentsBase base;
    Student* student = new Student(200118,"Jan","Kowalski");
    std::unique_ptr<Student> stud(new Student(200111,"Piotr","Nowak"));
    base.addStudent(std::move(stud));
    base.addStudent(std::move(std::make_unique<Student>(*student)));
    base.showBase();
    delete student;
    return 0;
}
