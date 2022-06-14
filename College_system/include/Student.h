#ifndef STUDENT_H
#define STUDENT_H
#include "StaffData.h"
#include <fstream>

using namespace std;

class Student:public StaffData
{
    public:
        void saveToFile(ofstream& out);
        void loadFromFile(ifstream& in);
        void signUP();
        void print();
        Student();
        Student(string,string,string,string,string,string,string);
        virtual ~Student();

    protected:

    private:
};

#endif // STUDENT_H
