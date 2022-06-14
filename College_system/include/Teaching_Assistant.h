#ifndef TEACHING_ASSISTANT_H
#define TEACHING_ASSISTANT_H
#include"StaffData.h"

class Teaching_Assistant :public StaffData
{
    public:
        Teaching_Assistant();
        virtual ~Teaching_Assistant();
    void addCourses();
    void addSalary();
    void print();
    protected:
    private:
        int start_Year;
        //Courses ta_course;
        double salary;
        //secition ta_section;
};

#endif // TEACHING_ASSISTANT_H
