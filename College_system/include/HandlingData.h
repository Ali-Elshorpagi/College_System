#ifndef HANDLINGDATA_H
#define HANDLINGDATA_H
#include "StaffData.h"
#include <windows.h>
#include <fstream>
#include "Student.h"
#include "Doctors.h"
#include "Teaching_Assistant.h"
#include "Administrator.h"

class HandlingData
{
public:
    template <typename type>
    inline void printline(type msg, bool end_line = true)
    {
        cout << msg << (end_line ? "\n" : "\t");
    }
    HandlingData();
    virtual ~HandlingData();
    bool sign_in(int);
    void sign_up(int);
    void print();
    bool handlePassword(int index);

private:
    StaffData **staff;
    StaffData **staffLoad;
    int loadcounter;
    static int staffcounter;
};

#endif // HANDLINGDATA_H
