#include <bits/stdc++.h>
#include <cstdlib>
#include <windows.h>
#include <cstring>
#include "HandlingData.h"
#include "ShowData.h"

using namespace std;

void sub_menu_1_sign_in();
void sub_menu_2_sign_up();
void sign_in_case(int);
void sign_up_case(int);

HANDLE cout_handle = GetStdHandle(STD_OUTPUT_HANDLE);

HandlingData h1;

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

int main()
{
    printline("\n\tSTART APPLICATION ....",1, 6);
    printline("\n----------------------------------",1,10);
    printline("\n\tPowered By TACS TEAM ...",1,12);
    wait_or_clear(3, 1);
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
            printline("\n--------------------------------------------------",1,10);
            printline("\n\tPowered By TACS TEAM.....",1,10);
            printline("\n\t>> Ali Abdulsalam Elshorpagi",1,6);
            printline("\n\t>> Amr Sameh Mohamed",1,6);
            printline("\n\t>> Ammar Gamal Gouda",1,6);
            printline("\n\t>> Mohamed Said Ibraim",1,6);
            printline("\n\n\a\t\t\tGoodbye :)......\n\n\n\n\n\n", 1, 12);
            break;
        default:
            print_try_again();
            wait_or_clear(3, true);
        }
    }
    return 0;
}

void sign_in_case(int c)
{
    if(h1.sign_in(c))
        continue;
    else
        printline("\n\t Invalid Username or Password, try again..:)\n",1,12);

    system("pause");
}

void sign_up_case(int c)
{
    h1.sign_up(c);
    printline("\n\tRegistered tSuccessfully...^_^\n",1,2);
    system("pause");
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
            sign_in_case(c);
        }
        break;
        case 2:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing IN -> STUDENT ....", 1, 14);
            sign_in_case(c);
        }
        break;
        case 3:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing IN -> TEACHING ASSISANT ....", 1, 14);
            sign_in_case(c);
        }
        break;
        case 4:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing IN -> Administrator ....", 1, 14);
            sign_in_case(c);
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
            sign_up_case(c);
            break;
        case 2:
            system("cls");
            printline("\n\nMAIN MENU -> SIGN UP -> STUDENT ....", 1, 14);
            sign_up_case(c);
            break;
        case 3:
            system("cls");
            printline("\n\nMAIN MENU -> SIGN UP -> TEACHING ASSISANT ....", 1, 14);
            sign_up_case(c);
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

