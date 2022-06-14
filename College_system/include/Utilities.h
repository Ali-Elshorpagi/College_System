#ifndef UTILITIES_H
#define UTILITIES_H
#include "Student.h"
#include <vector>

class Utilities
{
    public:
        void addStudent(Student &stu);
        void addStudent();
        void addStudent(string,string,string,string,string,string,string,string);
        void saveStudents();
        void loadStudents();
        void printStudents();
        Utilities();
        virtual ~Utilities();

    protected:

    private:
        vector<Student> allStudents;
};

#endif // UTILITIES_H
