#ifndef TEACHING_ASSISTANT_H
#define TEACHING_ASSISTANT_H
#include"StaffData.h"

class Teaching_Assistant :public StaffData
{
public:
   HANDLE cout_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    template <typename type>
    inline void printline(type msg,bool end_line = true, int color_code=15)
    {
        SetConsoleTextAttribute(cout_handle, color_code);
        cout << msg << (end_line ? "\n" : "\t");
    }
    Teaching_Assistant();
    virtual ~Teaching_Assistant();

    void AddPracticalExam();
    void AddQuizzes();

    void loadTACourses();
    void assignCourses();

    void print();
    virtual void signUP();
    virtual bool signIn(string,string);
    void SaveToFile(ofstream&);
    void LoadFromFile(ifstream&);
private:
    vector <Courses> TACourses;
};

#endif // TEACHING_ASSISTANT_H
