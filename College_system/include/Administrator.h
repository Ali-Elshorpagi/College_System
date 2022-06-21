#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include "StaffData.h"
#include "Courses.h"

class Administrator: public StaffData
{
public:
    template <typename type>
    inline void printline(type msg, bool end_line = true)
    {
        cout << msg << (end_line ? "\n" : "\t");
    }

    virtual void signUP();
    virtual bool signIn(string,string);
    void SaveToFile(ofstream&);
    void LoadFromFile(ifstream&);
    void assignCourseToDoctor();
    void print();

    Administrator();
    virtual ~Administrator();
private:
    Courses *coure;
    static int counter;
};

#endif // ADMINISTRATOR_H
