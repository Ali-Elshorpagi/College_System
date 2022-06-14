#ifndef EXAMS_H
#define EXAMS_H
#include<ctime>
#include<string>
#include<iostream>
using namespace std;

class Exams
{
    public:
        Exams();
        virtual ~Exams();
    void addExam();
    void editExam();
    void print();
    protected:

    private:
        string date;
};

#endif // EXAMS_H
