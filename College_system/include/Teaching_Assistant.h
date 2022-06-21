#ifndef TEACHING_ASSISTANT_H
#define TEACHING_ASSISTANT_H
#include"StaffData.h"

class Teaching_Assistant :public StaffData
{
public:
    template <typename type>
    inline void printline(type msg, bool end_line = true)
    {
        cout << msg << (end_line ? "\n" : "\t");
    }
    Teaching_Assistant();
    virtual ~Teaching_Assistant();

    void AddPracticalExam();
    void AddQuizzes();

    void addCourses();
    void addSalary();
    void print();
    virtual void signUP();
    virtual bool signIn(string,string);
    void SaveToFile(ofstream&);
    void LoadFromFile(ifstream&);
private:
    int start_Year;
    //Courses ta_course;
    double salary;
    //secition ta_section;
};

#endif // TEACHING_ASSISTANT_H
