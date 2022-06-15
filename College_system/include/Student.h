#ifndef STUDENT_H
#define STUDENT_H
#include "StaffData.h"

class Student:public StaffData
{
public:
    template <typename type>
    inline void printline(type msg, bool end_line = true)
    {
        cout << msg << (end_line ? "\n" : "\t");
    }
    void saveToFile(ofstream& out);
    void loadFromFile(ifstream& in);
    void signUP();
    bool signIn(string,string);
    void print();
    Student();
    Student(string,string,string,string,string,string,string);
    virtual ~Student();

private:
};

#endif // STUDENT_H
