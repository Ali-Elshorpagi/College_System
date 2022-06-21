#include <bits/stdc++.h>
#include <cstdlib>
#include <windows.h>
#include <cstring>
#include "HandlingData.h"
#include "ShowData.h"
#include "Administrator.h"
#include "Student.h"


using namespace std;

void sub_sub_menu_1_sign_in_stduent();
void sub_sub_menu_1_sign_in_teaching_assistant();
void sub_sub_menu_1_sign_in_doctor();
void sub_menu_1_sign_in();
void sub_menu_2_sign_up();

HANDLE cout_handle = GetStdHandle(STD_OUTPUT_HANDLE);


Student stu;
Administrator admin;
HandlingData h1;
ShowData showdata;

inline void wait_or_clear(unsigned int sec, bool clear_screen = false)
{
    Sleep(sec * 1000);
    if (clear_screen)
        system("cls");
}

template <typename type>
inline void printline(type msg, bool end_line = true, int color_code = 15)
{
    SetConsoleTextAttribute(cout_handle, color_code);
    cout << msg << (end_line ? "\n" : "\t");
}

inline void print_try_again()
{
    printline("\n\n\n\aInvalid Choice Try Again!!!!!!!!", 1, 4);
    wait_or_clear(1, 1);
}

/** MAIN PRINT MENU FUNCTION **/
int get_menu_choise(string menu, int level = 0)
{
    stringstream X(menu);
    string line, padding;
    int i = 1;
    for (int p = 0; p < level + 1; ++p)
        padding += "\t";

    while (getline(X, line, ','))
        printline(padding + "[" + to_string(i++) + "]." + line, 1, level + 10);

    printline(level ? padding + "[0].RETURN BACK" : padding + "[0].EXIT APP", 1, 5);
    int c;
    printline("ENTER YOUR CHOICE :", false, 8);
    cin >> c;
    return c;
}

/** Main Function */
int main()
{
    printline("START APPLICATION ....",1, 6);
    wait_or_clear(1, 1);
    int c = -1;
    while (c != 0)
    {
        wait_or_clear(0, 1);
        printline("\n\nMAIN MENU ....", 1, 14);
        c = get_menu_choise("Sign In,Sign Up", 0);
        switch (c)
        {
        case 1:
            sub_menu_1_sign_in();
            break;
        case 2:
            sub_menu_2_sign_up();
            break;
        case 0:
            printline("\n\n\a\t\t\tGoodbye :)......\n\n\n\n\n\n", 1, 12);
            break;
        default:
            print_try_again();
            wait_or_clear(3, true);
        }
    }
    return 0;
}

void sub_sub_menu_1_sign_in_stduent()
{
    int c = -1;
    while (c != 0)
    {
        wait_or_clear(0, 1);
        printline("\n\nMAIN MENU -> Sing in -> Student ....", 1, 14);
        c = get_menu_choise("Print Exams,Print Tables,Add Courses", 2);
        switch (c)
        {
        case 1:
            showdata.ShowExams();
            system("pause");
            break;
        case 2:
            showdata.ShowTables();
            system("pause");
            break;
        case 3:
            stu.assignCourseToStudent();
            system("pause");
            break;
        case 0:
            return;
        default:
            print_try_again();
        }
    }
}

void sub_sub_menu_1_sign_in_teaching_assistant()
{
    int c = -1;
    while (c != 0)
    {
        wait_or_clear(0, 1);
        printline("\n\nMAIN MENU -> Sing in -> Teaching Assistant ....", 1, 14);
        c = get_menu_choise("Add Practical Exam,Add Quizes,Print Students Data", 2);
        switch (c)
        {
        case 1:
            printline("\n\t\tCommunicate With Developers To Add it in This App ...:)\n\n",1,12);
            system("pause");
            break;
        case 2:
            printline("\n\t\tCommunicate With Developers To Add it in This App ...:)\n\n",1,12);
            system("pause");
            break;
        case 3:
            h1.print();
            system("pause");
            break;
        case 0:
            return;
        default:
            print_try_again();
        }
    }
}

void sub_sub_menu_1_sign_in_doctor()
{
    int c = -1;
    while (c != 0)
    {
        wait_or_clear(0, 1);
        printline("\n\nMAIN MENU -> Sing in -> Doctor ....", 1, 14);
        c = get_menu_choise("Add Exam,Add Assignments,Print Students Data", 2);
        switch (c)
        {
        case 1:
            printline("\n\t\tCommunicate With Developers To Add it in This App ...:)\n\n",1,12);
            system("pause");
            break;
        case 2:
            printline("\n\t\tCommunicate With Developers To Add it in This App ...:)  \n\n",1,12);
            system("pause");
            break;
        case 3:
            // printline("\n\t\tEnter Here Add Print Students Data Fun");
            h1.print();
            system("pause");
            break;
        case 0:
            return;
        default:
            print_try_again();
        }
    }
}

void sub_sub_menu_1_sign_in_admin()
{
    int c = -1;
    while (c != 0)
    {
        wait_or_clear(0, 1);
        printline("\n\nMAIN MENU -> Sing in -> Doctor ....", 1, 14);
        c = get_menu_choise("Add Courses,Add Fun 1,Add Fun 2,Add Fun 3",2);
        switch (c)
        {
        case 1:
            admin.assignCourseToDoctor();
            system("pause");
            break;
        case 2:
            printline("\n\t\tEnter Here Your Fun");
            system("pause");
            break;
        case 3:
            printline("\n\t\tEnter Here Your Fun");
            system("pause");
            break;
        case 4:
            printline("\n\t\tEnter Here Your Fun");
            system("pause");
            break;
        case 0:
            return;
        default:
            print_try_again();
        }
    }
}

void sub_menu_1_sign_in()
{
    int c = -1;
    while (c != 0)
    {
        wait_or_clear(0, 1);
        printline("\n\nMAIN MENU ->Sign IN AS ....", 1, 14);
        c = get_menu_choise("Doctor,Student,Teaching Assistant,Administrator", 1);
        switch (c)
        {
        case 1:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing IN -> DOCTOR ....", 1, 14);
            if(h1.sign_in(c))
            {
                printline("\n\tSuccessfully Logging...^_^",1,2);
                Sleep(1000);
                sub_sub_menu_1_sign_in_doctor();
            }
            else
            {
                printline("\n\t Invalid Username or Password, try again..:)\n",1,12);
            }
            system("pause");
        }
        break;
        case 2:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing IN -> STUDENT ....", 1, 14);
            if(h1.sign_in(c))
            {
                printline("\n\tSuccessfully Logging...^_^",1,2);
                Sleep(1000);
                sub_sub_menu_1_sign_in_stduent();
            }
            else
            {
                printline("\n\t Invalid Username or Password, try again..:)\n",1,12);
            }
        }
        system("pause");
        break;
        case 3:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing IN -> TEACHING ASSISANT ....", 1, 14);
            if(h1.sign_in(c))
            {
                printline("\n\tSuccessfully Logging...^_^",1,2);
                Sleep(1000);
                sub_sub_menu_1_sign_in_teaching_assistant();
            }
            else
            {
                printline("\n\t Invalid Username or Password, try again..:)\n",1,12);
            }
            system("pause");
        }
        break;
        case 4:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing IN -> Administrator ....", 1, 14);
            if(h1.sign_in(c))
            {
                printline("\n\tSuccessfully Logging...^_^",1,2);
                Sleep(1000);
                sub_sub_menu_1_sign_in_admin();
            }
            else
            {
                printline("\n\t Invalid Username or Password, try again..:)\n",1,12);
            }
            system("pause");
        }
        break;
        case 0:
            return;
        default:
            print_try_again();
        }
    }
}

void sub_menu_2_sign_up()
{
    int c = -1;
    while (c != 0)
    {
        wait_or_clear(0, 1);
        printline("\n\nMAIN MENU -> SIGN UP AS ....", 1, 14);
        c = get_menu_choise("Doctor,Student,Teaching Assistant,Administrator", 1);
        switch (c)
        {
        case 1:
            system("cls");
            printline("\n\nMAIN MENU -> SIGN UP -> DOCTOR ....", 1, 14);
            h1.sign_up(c);
            printline("\n\tRegistered tSuccessfully...^_^\n",1,2);
            system("pause");
            break;
        case 2:
            system("cls");
            printline("\n\nMAIN MENU -> SIGN UP -> STUDENT ....", 1, 14);
            h1.sign_up(c);
            printline("\n\tRegistered tSuccessfully...^_^\n",1,2);
            system("pause");
            break;
        case 3:
            system("cls");
            printline("\n\nMAIN MENU -> SIGN UP -> TEACHING ASSISANT ....", 1, 14);
            h1.sign_up(c);
            printline("\n\tRegistered tSuccessfully...^_^\n",1,2);
            system("pause");
            break;
        case 4:
            system("cls");
            printline("\n\nMAIN MENU -> SIGN UP -> Administrator ....", 1, 14);
            h1.sign_up(c);
            system("pause");
            break;
        case 0:
            return;
        default:
            print_try_again();
        }
    }
}

