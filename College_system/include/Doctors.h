#ifndef DOCTORS_H
#define DOCTORS_H

#include"StaffData.h"
class Doctors:public StaffData
{
public:
    template <typename type>
    inline void printline(type msg, bool end_line = true)
    {
        cout << msg << (end_line ? "\n" : "\t");
    }
    Doctors();
    virtual ~Doctors();
    virtual void signUP();
    virtual bool signIn(string,string);
    void SaveToFile(ofstream&);
    void LoadFromFile(ifstream&);
    /**************/
    void AddSalary();
    void addCourses();
    void Print();
protected:

private:
    double Salalry;
    int startYear;
//        Courses d_course;
    // Deparment departmentsList
};

#endif // DOCTORS_H
