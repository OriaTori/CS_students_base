#include <string>

class Student
{
public:
    Student() = delete;
    Student(unsigned int id, string firstN, string lastN):
        index(id),firstName(firstN),lastName(lastN){}; 
    ~Student();
    unsigned int getIndexNumber() const;
    string getFirstName() const;
    string getLastName() const;
private:
    unsigned int index;
    string firstName;
    string lastName;
};
