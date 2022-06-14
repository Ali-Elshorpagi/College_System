#ifndef COURSES_H
#define COURSES_H
#include<string>
#include<iostream>
using namespace std;


class Courses
{
public:
    Courses();
    virtual ~Courses();
    void addC_code();
    void addCourse();
    void print();
protected:

private:
    string c_code;
    string arr_courses;
    string c_name;

};

#endif // COURSES_H
