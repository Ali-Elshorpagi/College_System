#ifndef HANDLINGDATA_H
#define HANDLINGDATA_H
#include "StaffData.h"
#include <windows.h>
#include <fstream>
#include "Student.h"
#include "Doctors.h"
#include "Teaching_Assistant.h"
#include "Administrator.h"
#include "Books.h"
class HandlingData
{
public:
    HANDLE cout_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    template <typename type>
    inline void printline(type msg,bool end_line = true, int color_code=15)
    {
        SetConsoleTextAttribute(cout_handle, color_code);
        cout << msg << (end_line ? "\n" : "\t");
    }
   inline void wait_or_clear(unsigned int sec, bool clear_screen = false)
    {
        Sleep(sec * 1000);
        if (clear_screen)
            system("cls");
    }
    inline void print_try_again()
    {
        printline("\n\n\n\aInvalid Choice Try Again!!!!!!!!", 1, 4);
        wait_or_clear(1, 1);
    }
    int get_menu_choise(string menu, int level = 0);
    HandlingData();
    virtual ~HandlingData();
    bool sign_in(int);
    void sign_up(int);
    void print();
    bool handlePassword(int index);
    void sub_sub_menu_1_sign_in_stduent(int);
    void sub_sub_menu_1_sign_in_teaching_assistant(int);
    void sub_sub_menu_1_sign_in_doctor(int);
    void sub_sub_menu_1_sign_in_admin(int);

private:
    Books bok;
    StaffData **staff;
    StaffData **staffLoad;
    int loadcounter;
    static int staffcounter;
};

#endif // HANDLINGDATA_H
