#include <iostream>
#include "../include/StudentsBase.hpp"
#include "../include/Student.hpp"

int main()
{
    StudentsBase base;
    Student* student = new Student(200118,"Jan","Kowalski");
    Student stud(200111,"Piotr","Nowak");
    base.addStudent(&stud);
    base.addStudent(student);
    base.showBase();
    return 0;
}
