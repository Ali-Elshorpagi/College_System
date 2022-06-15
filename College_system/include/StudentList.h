#ifndef STUDENTLIST_H
#define STUDENTLIST_H
#include "Student.h"

class StudentList
{
public:
    StudentList();
    virtual ~StudentList();

private:
    Student *stud;
};

#endif // STUDENTLIST_H
