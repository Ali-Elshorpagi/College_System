#ifndef STUDENT_H
#define STUDENT_H
#include "StaffData.h"
#include "Courses.h"
#include <vector>

class Student:public StaffData
{
public:
    HANDLE cout_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    template <typename type>
    inline void printline(type msg,bool end_line = true, int color_code=15)
    {
        SetConsoleTextAttribute(cout_handle, color_code);
        cout << msg << (end_line ? "\n" : "\t");
    }
    void SaveToFile(ofstream&);
    void LoadFromFile(ifstream&);
    void signUP();
    bool signIn(string,string);
    void print();
    void printCourses();
    bool loadStudentCourses();
    void assignCourses();
    Student();
    virtual ~Student();

private:
    vector <Courses> StudentCourses;
};

#endif // STUDENT_H
