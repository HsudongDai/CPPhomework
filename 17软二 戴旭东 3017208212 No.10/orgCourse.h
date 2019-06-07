#ifndef ORGCOURSE_H_INCLUDED
#define ORGCOURSE_H_INCLUDED

#include <string>

class orgCourse
{
private:
    std::string courseName;
    std::string * students;
    int capacity;
    int numberOfStudents;
public:
    orgCourse(std::string & crsName, int capa){}
    orgCourse(){}
    ~orgCourse() {}
    std::string getCourseName() const;
    void addStudent(std::string & name);
    void dropStudent(std::string & name);
    std::string* getStudents() const;
    int getNumberOfStudents() const;
};


#endif // ORGCOURSE_H_INCLUDED
