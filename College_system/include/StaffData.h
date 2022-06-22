#ifndef STAFFDATA_H
#define STAFFDATA_H
#include <fstream>
#include <iostream>
#include <vector>
#include <iomanip>
#include <windows.h>
#include "ShowData.h"
#include "Courses.h"

using namespace std;

class StaffData: public ShowData,public Courses
{
public:
    HANDLE cout_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    template <typename type>
    inline void printline(type msg,bool end_line = true, int color_code=15)
    {
        SetConsoleTextAttribute(cout_handle, color_code);
        cout << msg << (end_line ? "\n" : "\t");
    }
    virtual void print()=0;
    virtual void printDoctors();
    virtual void signUP() = 0;
    virtual void AddPracticalExam(){};
    virtual void AddQuizzes(){};
    virtual void AddExam(){};
    virtual void AddCourses(){};
    virtual void AddAssignments(){};
    virtual void assignCourses()=0;
    virtual void SaveToFile(ofstream&)=0;
    virtual void LoadFromFile(ifstream&)=0;
    virtual bool signIn(string,string) = 0;
    bool LoadCoursesFromFile();
    virtual string getID()
    {
        return "";
    }
    virtual string getName()
    {
        return "";
    }

    string getPassword();
    string getUser();
    int getTypeId();
    StaffData();
    virtual ~StaffData();

protected:
    string id;
    string name;
    string phone;
    string email;
    string birthDate;
    string gender;
    string address;
    string type;
    int typeID;
    string username;
    string password;
    string passwordvalidaition;
    vector <Courses> CoursesList;
};

#endif // STAFFDATA_H
