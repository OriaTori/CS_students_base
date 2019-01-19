#include <vector>
#include "Student.hpp"

class StudentsBase
{
public:
    void addStudent(Student* student);
    void sortByIndexAsc(bool variant);
    void removeStudent(int index);
private:
    std::vector<Student> studentBase;    
};
