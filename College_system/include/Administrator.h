#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include "StaffData.h"
#include "Courses.h"

class Administrator: public StaffData
{
public:
    HANDLE cout_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    template <typename type>
    inline void printline(type msg,bool end_line = true, int color_code=15)
    {
        SetConsoleTextAttribute(cout_handle, color_code);
        cout << msg << (end_line ? "\n" : "\t");
    }
    virtual void signUP();
    virtual bool signIn(string,string);
    void SaveToFile(ofstream&);
    void LoadFromFile(ifstream&);
    void assignCourses() {};
    void AddCourses();
    void print();

    Administrator();
    virtual ~Administrator();
private:
    Courses *coure;
    static int counter;
};

#endif // ADMINISTRATOR_H
