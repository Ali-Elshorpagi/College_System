#ifndef DOCTORS_H
#define DOCTORS_H

#include"StaffData.h"
class Doctors:public StaffData
{
    public:
        Doctors();
        virtual ~Doctors();
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
