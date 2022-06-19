#ifndef COURSES_H
#define COURSES_H
#include <iostream>
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



    Courses();
    virtual ~Courses();

protected:

private:
};

#endif // COURSES_H
