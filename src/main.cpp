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
    base.removeStudent(200111);
    std::cout << "\n After remove 200111" << std::endl;
    base.sortByIndexAsc(true);
    base.showBase();
    return 0;
}
