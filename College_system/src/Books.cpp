#include "Books.h"

Books::Books()
{
    //ctor
}

Books::~Books()
{
    //dtor
}

void Books::addBooks()
{
    printline("\n\tPut Your Books Here According To Academic Year..:)\n");
    Sleep(2000);
    ShellExecute(NULL, "open","DataBase\\Books", NULL, NULL, SW_SHOW);
}


void Books::ShowBooks()
{
        int n=-1;
    while(n!=0)
    {
        system("cls");
        printline("\n\nMAIN MENU -> Sing in -> Student -> Show Books ....",1,14);
        printline("\t\t\t[1].First Year :\n\t\t\t[2].Second Year :\n\t\t\t[3].Third Year :\n\t\t\t[4].Fourth Year :",1,10);
        printline("\t\t\t[0].RETURN BACK :",1,5);
        printline("ENTER YOUR CHOICE :",false,8);
        cin>>n;
        switch(n)
        {
        case 0:
            break;
        case 1:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Books -> First Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\Books\\FirstYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\Books\\FirstYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        case 2:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Books -> Second Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\Books\\SecondYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\Books\\SecondYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        case 3:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Books -> Third Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\Books\\ThirdYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\Books\\ThirdYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        case 4:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Books -> Fourth Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\Books\\FourthYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\Books\\FourthYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        default:
            printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
            Sleep(500);
        }
    }
}
