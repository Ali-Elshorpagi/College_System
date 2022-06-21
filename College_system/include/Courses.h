#ifndef COURSES_H
#define COURSES_H
#include <iostream>
#include "StaffData.h"
#include "Doctors.h"
#include <windows.h>

using namespace std;

class Courses
{
public:
    HANDLE cout_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    template <typename type>
    inline void printline(type msg, bool end_line = true, int color_code = 15)
    {
        SetConsoleTextAttribute(cout_handle, color_code);
        cout << msg << (end_line ? "\n" : "\t");
    }
    void addCoursesToDoctor();
    void SaveToFile(ofstream&);
    void LoadFromFile(ifstream&);
    void print();
    string getName();
    string getID();

    Courses();
    virtual ~Courses();

private:
    string id;
    string name;
    string hours;
    string doctorName;
    string doctorID;
    StaffData **doc;
    int loadcounter;
};

#endif // COURSES_H
