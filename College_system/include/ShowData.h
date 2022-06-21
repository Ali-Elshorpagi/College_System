#ifndef SHOWDATA_H
#define SHOWDATA_H
#include <iostream>
#include <windows.h>

using namespace std;

class ShowData
{
public:
    HANDLE cout_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    template <typename type>
    inline void printline(type msg, bool end_line = true, int color_code = 15)
    {
        SetConsoleTextAttribute(cout_handle, color_code);
        cout << msg << (end_line ? "\n" : "\t");
    }

    void ShowTables();
    void ShowExams();
    void ShowAssignments();
    void ShowPracticalExams();
    void ShowQuizzes();

    ShowData();
    virtual ~ShowData();
};

#endif // SHOWDATA_H
