#pragma once
#include <string>

class Student
{
public:
    Student() = delete;
    Student(unsigned int id, std::string firstN, std::string lastN):
        index(id),firstName(firstN),lastName(lastN){}; 
    Student(const Student& student); 
    ~Student() = default;
    unsigned int getIndexNumber() const;
    std::string getFirstName() const;
    std::string getLastName() const;

    bool operator==(const Student& student) const;
    bool operator!=(const Student& student) const;
    bool operator<(const Student& student) const;
    bool operator>(const Student& student) const;
    bool operator<=(const Student& student) const;
    bool operator>=(const Student& student) const;
private:
    unsigned int index;
    std::string firstName;
    std::string lastName;
};
