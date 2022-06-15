#ifndef HANDLINGDATA_H
#define HANDLINGDATA_H
#include "StaffData.h"
#include "Student.h"
#include "Doctors.h"
#include "Teaching_Assistant.h"

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
    bool sign_in();
    void sign_up(int);

private:
    StaffData **staff;
    static int staffcounter;
};

#endif // HANDLINGDATA_H
