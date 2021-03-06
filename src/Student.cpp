#include "../include/Student.hpp"

Student::Student(const Student& student)
{
    index = student.getIndexNumber();
    firstName = student.getFirstName();
    lastName = student.getLastName();
}
unsigned int Student::getIndexNumber() const
{
    return index;
}
std::string Student::getFirstName() const
{
    return firstName;
}
std::string Student::getLastName() const
{
    return lastName;
}

bool Student::operator==(const Student& student) const
{
    return this->getIndexNumber() == student.getIndexNumber();
}
bool Student::operator!=(const Student& student) const
{
    return this->getIndexNumber() != student.getIndexNumber();
}
bool Student::operator<(const Student& student) const
{
    return this->getIndexNumber() < student.getIndexNumber();
}
bool Student::operator>(const Student& student) const
{
    return this->getIndexNumber() > student.getIndexNumber();
}
bool Student::operator<=(const Student& student) const
{
    return this->getIndexNumber() <= student.getIndexNumber();
}
bool Student::Student::operator>=(const Student& student) const
{
    return this->getIndexNumber() >= student.getIndexNumber();
}
