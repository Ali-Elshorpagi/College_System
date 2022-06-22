#ifndef DOCTORS_H
#define DOCTORS_H
#include"StaffData.h"

class Doctors:public StaffData
{
public:
    HANDLE cout_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    template <typename type>
    inline void printline(type msg,bool end_line = true, int color_code=15)
    {
        SetConsoleTextAttribute(cout_handle, color_code);
        cout << msg << (end_line ? "\n" : "\t");
    }
    Doctors();
    virtual ~Doctors();
    virtual void signUP();
    virtual bool signIn(string,string);
    void SaveToFile(ofstream&);
    void LoadFromFile(ifstream&);
    void AddExam();
    void AddAssignments();
    void loadDoctorCourses();

    void print();
    void assignCourses();
    string getID();
    string getName();

private:
    vector<Courses> DoctorCourses;
};

#endif // DOCTORS_H
