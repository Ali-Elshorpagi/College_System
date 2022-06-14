#include <cstdlib>
#include <windows.h>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;


HANDLE cout_handle = GetStdHandle(STD_OUTPUT_HANDLE);

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
    wait_or_clear(3, 1);
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
        printline(padding + to_string(i++) + ". " + line, 1, level + 10);

    printline(level ? padding + "0. RETURN BACK" : padding + "0. EXIT APP", 1, 5);
    int c;
    printline("ENTER YOUR CHOICE :", false, 8);
    cin >> c;
    return c;
}

void sub_sub_menu_1_sign_in_stduent()
{
    int c = -1;
    while (c != 0)
    {
        wait_or_clear(0, 1);
        printline("\n\nMAIN MENU -> Sing in -> Student ....", 1, 14);
        c = get_menu_choise("Print Exams,Print Tables,Print Courses", 2);
        switch (c)
        {
        case 1:
            printline("\n\t\tEnter Here Add Print Exams Fun");
            system("pause");
            break;
        case 2:
            printline("\n\t\tEnter Here Add Print Tables Fun");
            system("pause");
            break;
        case 3:
            printline("\n\t\tEnter Here Add Print Courses Fun");
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
        c = get_menu_choise("Add Practical Exam,Add Quizes,Add Courses,Print Student Data", 2);
        switch (c)
        {
        case 1:
            printline("\n\t\tEnter Here Add Practical Exam Fun");
            system("pause");
            break;
        case 2:
            printline("\n\t\tEnter Here Add Quizes Fun");
            system("pause");
            break;
        case 3:
            printline("\n\t\tEnter Here Add Courses Fun");
            system("pause");
            break;
        case 4:
            printline("\n\t\tEnter Here Add Print Student Data Fun");
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
        c = get_menu_choise("Add Exam,Add Assignments,Add Courses,Print Student Data", 2);
        switch (c)
        {
        case 1:
            printline("\n\t\tEnter Here Add Exam Fun");
            system("pause");
            break;
        case 2:
            printline("\n\t\tEnter Here Add Assignments Fun");
            system("pause");
            break;
        case 3:
            printline("\n\t\tEnter Here Add Courses Fun");
            system("pause");
            break;
        case 4:
            printline("\n\t\tEnter Here Add Print Student Data Fun");
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
        printline("\n\nMAIN MENU ->Log in....", 1, 14);
        c = get_menu_choise("Sign In as Doctor,Sign In as Student,Sign In Teaching Assistant", 1);
        switch (c)
        {
        case 1:
            printline("\n\n\t\tEnter here Doctor Log in");
            sub_sub_menu_1_sign_in_doctor();
            system("pause");
            break;
        case 2:
            printline("\n\n\t\tEnter here Student Log in");
            sub_sub_menu_1_sign_in_stduent();
            system("pause");
            break;
        case 3:
            printline("\n\n\t\tEnter here Teaching Assistant Log in");
            sub_sub_menu_1_sign_in_teaching_assistant();
            system("pause");
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
        printline("\n\nMAIN MENU -> Sing UP ....", 1, 14);
        c = get_menu_choise("Sign Up as Doctor,Sign Up as Student,Sign Up Teaching Assistant", 1);
        switch (c)
        {
        case 1:
            printline("\n\n\t\tEnter here Doctor Log up");
            system("pause");
            break;
        case 2:
            printline("\n\n\t\tEnter here Doctor Log up");
            system("pause");
            break;
        case 3:
            printline("\n\n\t\tEnter here Doctor Log up");
            system("pause");
            break;
        case 0:
            return;
        default:
            print_try_again();
        }
    }
}

int main()
{

    printline("START APPLICATION ....", 1, 6);
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
